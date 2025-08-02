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
      string s;
      cin >> s;
      vector<int> freq(10, 0);
      for (char c : s)
      {
            freq[c - '0']++;
      }
      string st;
      st.reserve(10);
      for (int i = 0; i < 10; i++)
      {
            int n = 10 - (i + 1);
            for (int j = n; j <= 9; j++)
            {
                  if (freq[j] > 0)
                  {
                        st.push_back(char('0' + j));
                        freq[j]--;
                        break;
                  }
            }
      }

      cout << st << '\n';
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