#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void knapsack(int i, int total_w, int total_v, int n, int w, vector<int> &weights, vector<int> &values, int &mx)
{
      if (i == n)
      { 
            if (total_w <= w)
            {                            
                  mx = max(mx, total_v); 
            }
            return;
      }

      // Option 1: Do not take the current item
      knapsack(i + 1, total_w, total_v, n, w, weights, values, mx);

      // Option 2: Take the current item (if weight constraint is satisfied)
      if (total_w + weights[i] <= w)
      {
            knapsack(i + 1, total_w + weights[i], total_v + values[i], n, w, weights, values, mx);
      }
}

void solve()
{
      int n, w;
      cin >> n >> w;
      vector<int> weights(n), values(n);
      for (int i = 0; i < n; i++)
      {
            cin >> weights[i] >> values[i];
      }

      int mx = 0;
      knapsack(0, 0, 0, n, w, weights, values, mx);
      cout << mx << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}
