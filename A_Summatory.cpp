#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9, mod = 1e9 + 3;
int f(int n)
{
      int s = (1LL * n * (n + 1) / 2) % mod;
      return 1LL * s * s % mod;
}
int pref[N];
int32_t main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      for (int i = 1; i < N; i++)
      {
            pref[i] = (pref[i - 1] + f(i)) % mod;
      }
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            cout << pref[n] << '\n';
      }
      return 0;
}