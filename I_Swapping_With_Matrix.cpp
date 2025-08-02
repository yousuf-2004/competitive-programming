#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
void swap_mat(int x, int y, vector<vector<int>> &a)
{
      for (int i = 0; i < a.size(); i++)
      {
            swap(a[x - 1][i], a[y - 1][i]); // swap rows
      }
      for (int i = 0; i < a.size(); i++)
      {
            swap(a[i][x - 1], a[i][y - 1]); // swap columns
      }
}
void solve()
{
      int n, x, y;
      cin >> n >> x >> y;
      vector<vector<int>> a(n, vector<int>(n));
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cin >> a[i][j];
            }
      }
      swap_mat(x, y, a);
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cout << a[i][j] << " ";
            }
            cout << endl;
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