#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      long long a, b;
      cin >> a >> b;
      long long x = a * b;
      long long y = a * (b + 1);
      if (b == 1)
      {
            cout << "NO" << endl;
      }
      else
      {
            cout << "YES" << endl;
            cout << a << " " << x << " " << y << endl;
      }
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}