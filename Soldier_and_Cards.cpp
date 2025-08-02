#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
void solve()
{
      int n;
      cin >> n;
      int k1;
      cin >> k1;
      deque<int> v;
      for (int i = 0; i < k1; i++)
      {
            int x;
            cin >> x;
            v.push_back(x);
      }
      int k2;
      cin >> k2;
      deque<int> v1;
      for (int i = 0; i < k2; i++)
      {
            int x;
            cin >> x;
            v1.push_back(x);
      }
      int fights = 0, win = -1;
      while (fights < N)
      {
            if (v.empty())
            {
                  win = 2;
                  break;
            }
            if (v1.empty())
            {
                  win = 1;
                  break;
            }
            int v_top = v[0], v1_top = v1[0];
            v.pop_front();
            v1.pop_front();
            if (v_top > v1_top)
            {
                  v.push_back(v1_top);
                  v.push_back(v_top);
            }
            else
            {
                  v1.push_back(v_top);
                  v1.push_back(v1_top);
            }
            fights++;
      }
      if (win == -1)
      {
            cout << -1 << '\n';
      }
      else
      {
            cout << fights << ' ' << win << '\n';
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