#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 200003;
const int bits = 30;
int pref[N][bits];
int a[N];
void Buildprefix(int n)
{
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < 30; j++)
            {
                  if (a[i] & (1 << j))
                  {
                        pref[i + 1][j] = pref[i][j] + 1;
                  }
                  else
                  {
                        pref[i + 1][j] = pref[i][j];
                  }
            }
      }
}
void solve()
{
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      Buildprefix(n);
      int q;
      cin >> q;
      while (q--)
      {
            int l, k;
            cin >> l >> k;
            if (a[l - 1] < k)
            {
                  cout << "-1 ";
                  continue;
            }
            int lo = l;
            int hi = n;
            int ans = l;
            while (lo <= hi)
            {
                  int mid = (lo + hi) / 2;
                  int num = 0;
                  for (int j = 0; j < bits; j++)
                  {
                        if (pref[mid][j] - pref[l - 1][j] == mid - l + 1)
                        {
                              num += (1 << j);
                        }
                  }
                  if (num >= k)
                  {
                        lo = mid + 1;
                        ans = max(ans, mid);
                  }
                  else
                        hi = mid - 1;
            }
            cout << ans << ' ';
      }
      cout << '\n';
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