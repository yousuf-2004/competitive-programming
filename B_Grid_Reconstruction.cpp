#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      int a[2][n + 1];
      a[0][1] = 2 * n;
      a[1][n] = (2 * n) - 1;

      int current = 1;
      for (int i = 1; i <= n; i++)
      {
            a[i % 2][i] = current;
            current++;
      }
      int k = (2 * n) - 2;
      for (int i = 3; i <= n; i += 2)
      {
            a[0][i] = k;
            a[1][i - 1] = k - 1;
            k -= 2;
      }
      for (int i = 0; i < 2; i++)
      {
            for (int j = 1; j <= n; j++)
            {
                  cout << a[i][j] << " ";
            }
            cout << "\n";
      }
}

int main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}
