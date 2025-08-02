#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int MAX = 100;
int cnt[MAX + 1];
void solve()
{
      int n;
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
            int x;
            cin >> x;
            cnt[x]++;
      }

      for (int i = 0; i <= MAX; i++)
      {
            while (cnt[i] > 0)
            {
                  cout << i << ' ';
                  cnt[i]--;
            }
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}