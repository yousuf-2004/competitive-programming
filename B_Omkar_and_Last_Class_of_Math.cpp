#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int largestDivisor(int n)
{
      if (n == 1)
            return 0;
      int limit = sqrt(n);
      int largest = 1;

      for (int i = 1; i <= limit; ++i)
      {
            if (n % i == 0)
            {
                  largest = max(largest, i);
                  if (i != n / i && n / i != n)
                        largest = max(largest, n / i);
            }
      }
      return largest;
}

void solve()
{
      int n;
      cin >> n;
      int t = largestDivisor(n);
      cout << t << ' ' << abs(n - t) << '\n';
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