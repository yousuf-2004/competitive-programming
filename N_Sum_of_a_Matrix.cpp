#include <bits/stdc++.h>
#define int long long
using namespace std;

const int n = 105;
int r, c, a[n][n], b[n][n];
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
void sum_of_matrix(int i, int j)
{
      if (i >= r)
            return;
      if (j >= c)
      {
            sum_of_matrix(i + 1, 0);
            return;
      }
      cout << a[i][j] + b[i][j];
      if (j == (c - 1))
      {
            cout << endl;
      }
      else
      {
            cout << " ";
      }
      sum_of_matrix(i, j + 1);
}
void solve()
{
      cin >> r >> c;
      for (int i = 0; i < r; i++)
      {
            for (int j = 0; j < c; j++)
            {
                  cin >> a[i][j];
            }
      }
      for (int i = 0; i < r; i++)
      {
            for (int j = 0; j < c; j++)
            {
                  cin >> b[i][j];
            }
      }
      sum_of_matrix(0, 0);
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}