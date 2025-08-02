#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
      unsigned int n;
      cin >> n;

      unsigned int ans = 0;
      for (int i = 0; i < 32; i++)
      {
            if ((n >> i) & 1)
            {
                  ans |= (1 << (31 - i));
            }
      }

      cout << ans << endl;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}
