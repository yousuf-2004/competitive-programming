#include <bits/stdc++.h>
// #define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

int nCr(int n, int r)
{
      if (n < r or r < 0 or n < 0)
      {
            return 0;
      }
      if (n == 0)
      {
            return 1;
      }
      return nCr(n - 1, r) + nCr(n - 1, r - 1);
}
int main()
{
      int n, r;
      cin >> n >> r;
      cout << nCr(n, r);
      return 0;
}