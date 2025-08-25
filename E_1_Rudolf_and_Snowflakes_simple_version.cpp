#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
set<int> st;
void prec()
{
      for (int k = 2; k <= 1000; k++)
      {
            int val = 1 + k;
            int p = k * k;
            for (int i = 2; i <= 20; i++)
            {
                  val += p;
                  if (val > 1e6)
                        break;
                  st.insert(val);
                  p *= k;
            }
      }
}
void solve()
{
      int n;
      cin >> n;

      if (st.count(n))
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      prec();
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}