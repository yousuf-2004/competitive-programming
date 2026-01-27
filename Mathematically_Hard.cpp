#include <bits/stdc++.h>
// #define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 5e6 + 9;
int spf[N];
int phi[N];
unsigned long long pref[N];
void solve()
{
      for (int i = 2; i < N; i++)
      {
            spf[i] = i;
      }
      for (int i = 2; i < N; i++)
      {
            if (spf[i] == i)
            {
                  for (int j = i; j < N; j += i)
                  {
                        spf[j] = min(spf[j], i);
                  }
            }
      }
      for (int i = 1; i < N; i++)
      {
            int x = i, res = 1;
            while (x > 1)
            {
                  int p = spf[x], e = 0, pw = 1;
                  while (x % p == 0)
                  {
                        e++;
                        pw *= p;
                        x /= p;
                  }
                  res *= (pw / p) * (p - 1);
            }
            pref[i] = pref[i - 1] + 1ll * res * res;
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      solve();
      int t = 1;
      cin >> t;
      for (int i = 1; i <= t; i++)
      {
            int a, b;
            cin >> a >> b;
            cout << "Case " << i << ": " << pref[b] - pref[a - 1] << '\n';
      }
      return 0;
}