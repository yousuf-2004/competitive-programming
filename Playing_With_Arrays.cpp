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
      deque<int> a, r;
      for (int i = 1; i <= n; i++)
      {
            r.push_back(i);
      }
      for (int i = n; i >= 1; i--)
      {
            if (!a.empty())
            {
                  int last_element = a.back();
                  a.pop_back();
                  a.push_front(last_element);
            }
            int last_element = r.back();
            r.pop_back();
            a.push_front(last_element);
      }

      for (int i = 0; i < n; i++)
      {
            cout << a[i];
            if (i < n - 1)
            {
                  cout << ' ';
            }
      }
      cout << '\n';
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