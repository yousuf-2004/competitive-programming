#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
/* const int N = 200'000;
const int INF = 1'000'000'009;
int t;

char type(const vector<int> &a, int id)
{
      int distL = (id == 0 ? INF : a[id] - a[id - 1]);
      int distR = (id + 1 == a.size() ? INF : a[id + 1] - a[id]);
      if (distL < distR)
            return 'L';
      if (distL > distR)
            return 'R';
      assert(false);
}

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      vector<int> l(n), r(n);
      for (int i = 1; i < n; i++)
      {
            r[i] = r[i - 1] + (type(a, i - 1) == 'R' ? 1 : a[i] - a[i - 1]);
      }
      for (int i = n - 2; i >= 0; i--)
      {
            l[i] = l[i + 1] + (type(a, i + 1) == 'L' ? 1 : a[i + 1] - a[i]);
      }

      int m;
      cin >> m;
      for (int i = 0; i < m; i++)
      {
            int x, y;
            cin >> x >> y;
            x--, y--;
            if (x < y)
                  cout << r[y] - r[x] << endl;
            else
                  cout << l[y] - l[x] << endl;
      }
} */
void solve()
{
      int n;
      cin >> n;
      vector<int> a(n);
      for (int &x : a)
      {
            cin >> x;
      }

      vector<int> costR(n, 0), costL(n, 0);

      // compute cost to move right
      for (int i = 0; i + 1 < n; i++)
      {
            int distL = (i == 0 ? 1e18 : a[i] - a[i - 1]);
            int distR = a[i + 1] - a[i];

            if (distR < distL)
                  costR[i] = 1;
            else
                  costR[i] = distR;
      }

      // compute cost to move left
      for (int i = n - 1; i - 1 >= 0; i--)
      {
            int distL = a[i] - a[i - 1];
            int distR = (i + 1 == n ? 1e18 : a[i + 1] - a[i]);

            if (distL < distR)
                  costL[i] = 1;
            else
                  costL[i] = distL;
      }

      // prefix sums
      vector<int> prefR(n, 0), prefL(n, 0);
      for (int i = 1; i < n; i++)
      {
            prefR[i] = prefR[i - 1] + costR[i - 1];
      }

      for (int i = n - 2; i >= 0; i--)
      {
            prefL[i] = prefL[i + 1] + costL[i + 1];
      }

      int m;
      cin >> m;
      while (m--)
      {
            int x, y;
            cin >> x >> y;
            x--, y--;

            if (x < y)
            {
                  cout << prefR[y] - prefR[x] << "\n";
            }
            else
            {
                  cout << prefL[y] - prefL[x] << "\n";
            }
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