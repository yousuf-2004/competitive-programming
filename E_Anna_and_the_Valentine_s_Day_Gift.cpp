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
      int n, m;
      cin >> n >> m;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int total_digit = 0;
      int zero[n]{};
      for (int i = 0; i < n; i++)
      {
            while (v[i] % 10 == 0)
            {
                  zero[i]++;
                  v[i] /= 10;
                  total_digit++;
            }
            while (v[i] > 0)
            {
                  total_digit++;
                  v[i] /= 10;
            }
      }

      sort(zero, zero + n, greater<>());

      for (int i = 0; i < n; i += 2)
      {
            total_digit -= zero[i];
      }

      if (total_digit > m)
      {
            cout << "Sasha\n";
      }
      else
      {
            cout << "Anna\n";
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