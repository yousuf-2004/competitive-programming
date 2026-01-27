#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
vector<int> lucky;

void generate(string s, int c4, int c7)
{
      if (s.size() > 10)
            return;

      if (!s.empty() && c4 == c7)
      {
            lucky.push_back(stoll(s));
      }

      generate(s + '4', c4 + 1, c7);
      generate(s + '7', c4, c7 + 1);
}
void solve()
{
      int n;
      cin >> n;
      generate("", 0, 0);

      sort(lucky.begin(), lucky.end());

      for (int x : lucky)
      {
            if (x >= n)
            {
                  cout << x << "\n";
                  return;
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