#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      int mx = 0;
      vector<int> pre_sum;
      pre_sum.push_back(0);
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            pre_sum.push_back(pre_sum[i] + x);
      }

      for (int i = 1; i <= n; i++)
      {
            vector<int> temp;
            if (n % i == 0)
            {
                  for (int j = i; j <= n; j += i)
                  {
                        temp.push_back(pre_sum[j] - pre_sum[j - (i)]);
                  }
                  sort(temp.begin(), temp.end());
                  mx = max(mx, temp[temp.size() - 1] - temp[0]);
            }
      }
      cout << mx << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}