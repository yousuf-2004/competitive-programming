#include <bits/stdc++.h>
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
      if (n == 1)
      {
            cout << 1 << endl
                 << 1 << endl;
            return;
      }
      if (n == k || k == 1)
      {
            cout << -1 << endl;
            return;
      }

      cout << "3\n1 " << k - k % 2 << " " << k + 1 + k % 2 << endl;  
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