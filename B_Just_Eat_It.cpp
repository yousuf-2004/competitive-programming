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
      int total_tastiness_of_yasser = accumulate(v.begin(), v.end(), 0ll);

      int total_tastiness_of_adel = LLONG_MIN;
      int sum = 0;
      for (int i = 0; i < n - 1; i++)
      {
            sum += v[i];
            total_tastiness_of_adel = max(total_tastiness_of_adel, sum);
      }

      sum = 0;
      for (int i = n - 1; i > 0; i--)
      {
            sum += v[i];
            total_tastiness_of_adel = max(total_tastiness_of_adel, sum);
      }

      // cout << total_tastiness_of_adel << " " << total_tastiness_of_yasser << "\n";
      if (total_tastiness_of_yasser > total_tastiness_of_adel)
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
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