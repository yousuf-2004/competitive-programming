#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int mod = 998244353;
int power[100001];

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      vector<int> posa(n), posb(n);
      for (int i = 0; i < n; i++)
      {
            posa[a[i]] = i;
            posb[b[i]] = i;
      }

      vector<int> ans;
      int mx_a = a[0], mx_b = b[0];
      for (int i = 0; i < n; i++)
      {
            mx_a = max(mx_a, a[i]);
            mx_b = max(mx_b, b[i]);

            pair<int, int> p1 = make_pair(mx_a, b[i - posa[mx_a]]);
            pair<int, int> p2 = make_pair(mx_b, a[i - posb[mx_b]]);
            pair<int, int> p = max(p1, p2);

            ans.push_back((power[p.first] + power[p.second]) % mod);
      }

      for (auto a : ans)
      {
            cout << a << ' ';
      }
      cout << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      power[0] = 1;
      for (int i = 1; i <= 100000; i++)
      {
            power[i] = 2 * power[i - 1] % mod;
      }
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}