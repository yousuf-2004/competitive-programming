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
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int mx = v[n - 1];
      int ans = 0;

      for (int k = 2; k < n; k++)
      {
            int i = 0, j = k - 1;
            while (i < j)
            {
                  int sum = v[i] + v[j];
                  int need = max(v[k], mx - v[k]);//bob either choose to color that is alread choosen by Alice,or he can chose any color form the array which is greater then the sum that's why here using max of this two value;
                  if (sum > need)
                  {
                        ans += (j - i);
                        j--;
                  }
                  else
                  {
                        i++;
                  }
            }
      }
      cout << ans << '\n';
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