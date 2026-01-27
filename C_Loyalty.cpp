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
      int n, x;
      cin >> n >> x;
      vector<int> v(n + 1);
      int sum = 0, pt = 0;
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
            sum += v[i];
      }
      sort(v.begin(), v.end());

      if (sum / x)
      {
            for (int i = n; i >= max(1ll, n - sum / x + 1); i--)
            {
                  pt += v[i];
            }
      }
      cout << pt << '\n';
      int cur = 0;
      for (int i = 1, j = n; i <= j;)
      {
            if (cur + v[j] >= x)
            {
                  cout << v[j] << " ";
                  cur += v[j];
                  j--;
            }
            else
            {
                  cout << v[i] << " ";
                  cur += v[i];
                  i++;
            }
            cur %= x;
      }
      cout << '\n';
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