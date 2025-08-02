#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int check_odd(int n)
{
      return n & 1;
}

int check_binary_palindrome(int n)
{
      string s = "";
      while (n)
      {
            s += (n & 1) + '0';
            n >>= 1;
      }
      string s1 = s;
      reverse(s1.begin(), s1.end());
      return s == s1;
}
void solve()
{
      int n;
      cin >> n;
      if (!check_odd(n))
      {
            cout << "NO" << endl;
      }
      else if (check_binary_palindrome(n))
      {
            cout << "YES" << endl;
      }
      else
      {
            cout << "NO" << endl;
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