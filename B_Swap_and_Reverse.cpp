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
      int n, k;
      cin >> n >> k;
      string s;
      cin >> s;
      if (k % 2 == 0)
      {
            sort(s.begin(), s.end());
            cout << s << endl;
            return;
      }
      vector<char> odd, even;
      for (int i = 0; i < n; i++)
      {
            if (i % 2 == 0)
                  even.push_back(s[i]);
            else
                  odd.push_back(s[i]);
      }
      int odd_cnt = 0, even_cnt = 0;
      sort(odd.begin(), odd.end());
      sort(even.begin(), even.end());
      for (int i = 0; i < n; i++)
      {
            if (i % 2 == 0)
                  cout << even[even_cnt++];
            else
                  cout << odd[odd_cnt++];
      }
      cout << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}