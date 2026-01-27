#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int maxn = 1e8;
bitset<maxn> is_prime;
void sieve()
{
      for (int i = 2; i < maxn; i++)
      {
            is_prime[i] = true;
      }
      is_prime[0] = is_prime[1] = false;
      for (int i = 2; i * i < maxn; i++)
      {
            if (is_prime[i])
            {
                  for (int j = i * i; j < maxn; j += i)
                  {
                        is_prime[j] = false;
                  }
            }
      }
}
void solve()
{
      sieve();
      vector<int> v;
      for (int i = 2; i < maxn; i++)
      {
            if (is_prime[i])
                  v.push_back(i);
      }
      for (int i = 0; i < v.size(); i += 100)
      {
            cout << v[i] << '\n';
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