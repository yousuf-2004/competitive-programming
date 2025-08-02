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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      vector<int> v1({v[n - 1]});
      for (int i = n - 2; i >= 0; i--)
      {
            if (v[i] > v1.back())
            {
                  v1.push_back(v[i] % 10);
                  v1.push_back(v[i] / 10);
            }
            else
                  v1.push_back(v[i]);
      }
      cout << (is_sorted(v1.rbegin(), v1.rend()) ? "YES" : "NO") << '\n';
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}