#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool query(int t)
{
      cout << t << endl;
      string s;
      cin >> s;
      return s == "yes";
}
bool is_prime(int n)
{
      for (int i = 2; i < n; i++)
      {
            if (n % i == 0)
            {
                  return false;
            }
      }
      return true;
}
void solve()
{
      if (query(2 * 2) or query(3 * 3) or query(5 * 5) or query(7 * 7))
      {
            cout << "composite" << endl;
            return;
      }

      int prime_div = 0;
      for (int i = 2; i <= 50; i++)
      {
            if (is_prime(i))
            {
                  prime_div += query(i);
            }
      }

      if (prime_div <= 1)
      {
            cout << "prime" << endl;
      }
      else
      {
            cout << "composite" << endl;
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      // cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}