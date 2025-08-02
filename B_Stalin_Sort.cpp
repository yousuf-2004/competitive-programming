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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int ans = n;
      for (int i = 0; i < n; i++)
      {
            int cnt = 0;
            for (int j = i + 1; j < n; j++)
            {
                  if (a[j] > a[i])
                  {
                        cnt++;
                  }
            }
            ans = min(ans, cnt + i);
      }
      cout << ans << endl;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}