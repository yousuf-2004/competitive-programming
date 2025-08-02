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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      vector<int> v;
      v.reserve(n);
      for (int i = 0, j; i < n; i = j)
      {
            j = i + 1;
            while (j < n && a[j] == a[i])
            {
                  j++;
            }
            v.push_back(a[i]);
      }

      int m = v.size();
      if (m <= 1)
      {
            cout << 0 << "\n";
            return;
      }

      vector<int> d;
      d.reserve(m);
      for (auto x : v)
      {
            auto it = upper_bound(d.begin(), d.end(), x);
            if (it == d.end())
            {
                  d.push_back(x);
            }
            else
            {
                  *it = x;
            }
      }
      int k = d.size();

      cout << (m - k) << "\n";
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}