#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool is_prime(int n)
{
      if(n==1){
            return false;
      }
      for (int i = 2; i * i <= n; i++)
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
      int n;
      cin >> n;
      if (is_prime(n))
      {
            cout << "Yes" << '\n';
      }
      else
      {
            cout << "No" << '\n';
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}