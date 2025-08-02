#include <bits/stdc++.h>
using namespace std;

int main()
{
      int T;
      cin >> T;
      while (T--)
      {
            int n, q;
            cin >> n >> q;
            int a[n + 1];
            for (int i = 0; i <= n; i++)
            {
                  a[i] = 0;
            }
            map<int, int> mp;
            while (q--)
            {
                  int l, r;
                  cin >> l >> r;
                  int val = r - l + 1;
                  a[l] += 1;
                  a[r + 1] -= 1;
                  mp[r + 1] += -val;
            }

            for (int i = 1; i <= n; i++)
            {
                  a[i] += a[i - 1];
            }
            for (int i = 1; i <= n; i++)
            {
                  a[i] += a[i - 1];
                  a[i] += mp[i];
            }
            for (int i = 1; i <= n; i++)
            {
                  cout << a[i] << ' ';
            }
            cout << '\n';
      }
      return 0;
}