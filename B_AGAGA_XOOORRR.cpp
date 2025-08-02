#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2005;
int a[N], pref_XOR[N];
int get_xor(int l, int r)
{
      return pref_XOR[r] ^ pref_XOR[l - 1];
}
void solve()
{
      int n;
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }

      pref_XOR[0] = 0;
      for (int i = 1; i <= n; i++)
      {
            pref_XOR[i] = pref_XOR[i - 1] ^ a[i];
      }

      bool found = false;
      for (int i = 1; i < n; i++)
      {
            int x = get_xor(1, i);
            int y = get_xor(i + 1, n);
            if (x == y)
            {
                  found = true;
            }
      }

      for (int i = 1; i <= n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  int x = get_xor(1, i);
                  int y = get_xor(i + 1, j);
                  int z = get_xor(j + 1, n);
                  if (x == y and y == z)
                  {
                        found = true;
                  }
            }
      }

      if (found)
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