#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
bool palindrome(int i, vector<int> &a, int n)
{
      if (i >= n / 2)
      {
            return true;
      }
      if (a[i] != a[n - i - 1])
      {
            return false;
      }
      return palindrome(i + 1, a, n);
}
void solve()
{
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      if (!palindrome(0, a, n))
      {
            cout << "NO";
      }
      else
      {
            cout << "YES";
      }
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}