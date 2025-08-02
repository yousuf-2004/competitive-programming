#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

const int N = 1e5 + 9;
int a[N], pref_xor[N];
int cnt[30][2]; // cnt[bit][0/1]
int32_t main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                  cin >> a[i];
            }
            pref_xor[0] = 0;
            for (int i = 1; i <= n; i++)
            {
                  pref_xor[i] = pref_xor[i - 1] ^ a[i];
            }
            // update cnt array for prefix_xor[0]
            for (int k = 0; k < 30; k++)
            {
                  int cur_bit = (pref_xor[0] >> k) & 1;
                  if (cur_bit == 0)
                  {
                        cnt[k][0]++;
                  }
                  else
                  {
                        cnt[k][1]++;
                  }
            }
            long long ans = 0;
            for (int i = 1; i <= n; i++)
            {
                  // add answer for prefix_xor[i]

                  // for (int j = 1; j <= i; j++) {
                  //   ans += pref_xor[i] ^ pref_xor[j - 1]; // xor of subrray [j...i]
                  // }

                  for (int k = 0; k < 30; k++)
                  {
                        int cur_bit = (pref_xor[i] >> k) & 1;
                        if (cur_bit == 0)
                        {
                              ans += 1LL * cnt[k][1] * (1 << k);
                        }
                        else
                        {
                              ans += 1LL * cnt[k][0] * (1 << k);
                        }
                  }

                  // update cnt array for prefix_xor[i]
                  for (int k = 0; k < 30; k++)
                  {
                        int cur_bit = (pref_xor[i] >> k) & 1;
                        if (cur_bit == 0)
                        {
                              cnt[k][0]++;
                        }
                        else
                        {
                              cnt[k][1]++;
                        }
                  }
            }
            cout << ans << '\n';

            // resetting everything
            for (int k = 0; k < 30; k++)
            {
                  cnt[k][0] = 0;
                  cnt[k][1] = 0;
            }
      }
      return 0;
}