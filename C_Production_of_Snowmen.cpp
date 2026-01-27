#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool check(const vector<int> &a, const vector<int> &b, int j, int k, int n)
{
      for (int i = 0; i < a.size(); i++)
      {
            if (a[(i + j) % n] >= b[(i + k) % n])
            {
                  return false;
            }
      }
      return true;
}

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n), b(n), c(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> c[i];
      }
      int c1 = 0, c2 = 0;
      for (int j = 0; j < n; j++)
      {
            c1 += check(a, b, j, 0, n);
      }
      for (int j = 0; j < n; j++)
      {
            c2 += check(b, c, 0, j, n);
      }
      cout << c1 * c2 * n << '\n';
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