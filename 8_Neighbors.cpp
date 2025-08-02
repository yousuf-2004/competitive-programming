#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 105;
char a[N][N];
int n, m;
bool is_inside(int i, int j)
{
      if (i >= 0 and i < n and j >= 0 and j < m)
      {
            return true;
      }
      return false;
}

bool is_valid(int i, int j)
{
      if (!is_inside(i, j))
            return true;
      if (a[i][j] == 'x')
      {
            return true;
      }
      return false;
}
void solve()
{
      cin >> n >> m;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int x, y;
      cin >> x >> y;
      x--;
      y--;
      if (is_valid(x - 1, y) and is_valid(x, y - 1) and is_valid(x + 1, y) and is_valid(x, y + 1) and is_valid(x - 1, y - 1) and is_valid(x - 1, y + 1) and is_valid(x + 1, y - 1) and is_valid(x + 1, y + 1))
      {
            cout << "yes" << endl;
      }
      else
      {
            cout << "no" << endl;
      }
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}