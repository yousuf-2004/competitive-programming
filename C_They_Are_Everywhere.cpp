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
      string s;
      cin >> s;
      set<char> st;
      for (auto a : s)
      {
            st.insert(a);
      }
      int MAX = st.size();
      int ans = n;
      int l = 0, r = 0;
      map<char, int> mp;
      while (true)
      {
            if (mp.size() < MAX)
            {
                  if (r >= n)
                  {
                        break;
                  }
                  mp[s[r]]++;
                  r++;
            }
            else
            {
                  ans = min(ans, r - l);
                  mp[s[l]]--;
                  if (mp[s[l]] == 0)
                  {
                        mp.erase(s[l]);
                  }
                  l++;
            }
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