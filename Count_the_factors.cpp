#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
vector<int> v;
void factorize(int n)
{
      v.clear();
      int x = n;
      for (int i = 2; i * i <= x; i++)
      {
            if (x % i == 0)
            {
                  while (x % i == 0)
                  {
                        x /= i;
                        v.push_back(i);
                  }
            }
      }
      if (x > 1)
      {
            v.push_back(x);
      }
      set<int> st(v.begin(), v.end());
      cout << n << " : " << st.size() << '\n';
}
void solve()
{
      while (true)
      {
            int x;
            cin >> x;
            if (x == 0)
            {
                  break;
            }
            factorize(x);
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