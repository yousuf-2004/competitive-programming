#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
int mask[N];
void solve()
{
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            string s;
            cin >> s;
            vector<int> freq(26, 0);
            for (char c : s)
            {
                  freq[c - 'a']++;
            }
            for (int k = 0; k < 26; k++)
            {
                  if (freq[k] % 2 == 1)
                  {
                        mask[i] += (1 << k);
                  }
            }
      }
      int ans = 0;
      map<int, int> mp;
      for (int i = 0; i < n; i++)
      {
            ans += mp[mask[i]];
            for (int k = 0; k < 26; k++)
            {
                  ans += mp[mask[i] ^ (1 << k)];
            }
            mp[mask[i]]++;
      }
      cout << ans << '\n';
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