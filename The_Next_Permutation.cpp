#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
const int N = 88;
char s[N];
void solve()
{
      int x;
      cin >> x >> s;
      int n = strlen(s);
      bool exist = next_permutation(s, s + n);
      if (exist)
      {
            cout << x << " " << s << endl;
      }
      else
      {
            cout << x << " " << "BIGGEST" << endl;
      }
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}