#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 9;
int n, a[N];
string t, p;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool sub(string s, string p)
{
      int m = s.size();
      int i = 0;
      for (char c : p)
      {
            while (i < m and s[i] != c)
            {
                  ++i;
            }
            if (i >= m)
            {
                  return false;
            }
            i++;
      }
      return true;
}
bool ok(int x)
{
      vector<bool> alive(n, true);
      for (int i = 1; i <= x; i++)
      {
            alive[a[i]] = false;
      }
      string s = "";
      for (int i = 0; i < n; i++)
      {
            if (alive[i])
            {
                  s += t[i];
            }
      }
      return sub(s, p);
}
void solve()
{
      cin >> t >> p;
      n = t.size();
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
            a[i]--;
      }
      int l = 1, r = n, ans = 0;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (ok(mid))
            {
                  ans = mid;
                  l = mid + 1;
            }
            else
            {
                  r = mid - 1;
            }
      }
      cout << ans << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}