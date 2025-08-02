#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      vector<vector<int>> arr(6, vector<int>(6));
      for (int i = 0; i < 6; i++)
      {
            for (int j = 0; j < 6; j++)
            {
                  cin >> arr[i][j];
            }
      }
      int sum = INT_MIN;
      for (int i = 0; i < 4; i++)
      {
            for (int j = 0; j < 4; j++)
            {
                  int temp = 0;
                  temp += arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                  temp += arr[i + 1][j + 1];
                  temp += arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                  sum = max(sum, temp);
            }
      }
      cout << sum << endl;
}

signed main()
{
      int t = 1;
      //cin >> t;
      while (t--)
            solve();
      return 0;
}