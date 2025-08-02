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
      bool ok = false;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            if (a[i] == a[i - 1])
            {
                  ok = true;
            }
      }

      if (ok)
      {
            cout << "YES" << '\n';
            return;
      }

      vector<int> pref_even(n);
      vector<int> pref_odd(n);
      pref_even[0] = a[0];
      int flag = 0;
      map<int, int> mp;
      mp[pref_odd[0] - pref_even[0]]++;
      for (int i = 1; i < n; i++)
      {
            pref_even[i] += pref_even[i - 1];
            pref_odd[i] += pref_odd[i - 1];
            if (i % 2 == 0)
            {
                  pref_even[i] += a[i];
            }
            else
            {
                  pref_odd[i] += a[i];
            }

            mp[pref_odd[i] - pref_even[i]]++;
            if (mp[pref_odd[i] - pref_even[i]] == 2 || pref_odd[i] - pref_even[i] == 0)
            {
                  flag = 1;
                  break;
            }
      }

      if (flag == 1)
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
      }
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