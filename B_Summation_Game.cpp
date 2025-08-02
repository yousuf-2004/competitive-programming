#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
      int n, k, x;
      cin >> n >> k >> x;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      sort(a.begin(), a.end());

      vector<int> pref(n, 0);
      pref[0] = a[0];
      for (int i = 1; i < n; i++)
      {
            pref[i] = pref[i - 1] + a[i];
      }
      int ans = LLONG_MIN;
      for (int remove = 0; remove <= k; remove++)
      {
            if (remove == n)
            {
                  ans = max(ans, 0LL);
                  break;
            }
            int afterRemoval = pref[n - 1 - remove];

            int canNegify = min(n - remove, x);
            int lastRemainingIndex = n - 1 - remove;
            int negifiedTill = max(0ll, lastRemainingIndex - canNegify + 1);

            int gain;
            int negifiedWindowSum;
            if (negifiedTill == 0)
            {
                  negifiedWindowSum = pref[lastRemainingIndex];
                  gain = -negifiedWindowSum;
            }
            else
            {
                  negifiedWindowSum = pref[lastRemainingIndex] - pref[negifiedTill - 1];
                  gain = pref[negifiedTill - 1] - negifiedWindowSum;
            }

            ans = max(ans, gain);
      }

      cout << ans << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}
