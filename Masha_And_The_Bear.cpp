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
      deque<int> dec;
      int masha = 0, bear = 0;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            dec.push_back(x);
      }
      int i = 0;
      while (!dec.empty())
      {
            i = 2;
            while (!dec.empty() and i--)
            {
                  masha += dec.front();
                  dec.pop_front();
            }
            i = 2;
            while (!dec.empty() and i--)
            {
                  bear += dec.back();
                  dec.pop_back();
            }
      }
      // cout<<masha<<'\n'<<bear<<'\n';
      if (masha == bear)
      {
            cout << "Draw" << '\n';
      }
      else if (masha > bear)
      {
            cout << "Masha" << '\n';
      }
      else
      {
            cout << "The Bear" << '\n';
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