#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2e7 + 9;
bitset<N> is_prime;
vector<pair<int, int>> v;
void sieve()
{
      is_prime[0] = is_prime[1] = false;
      for (int i = 2; i < N; i++)
      {
            is_prime[i] = true;
      }
      for (int i = 2; i * i < N; i++)
      {
            if (is_prime[i])
            {
                  for (int j = i * i; j < N; j += i)
                  {
                        is_prime[j] = false;
                  }
            }
      }
}
void solve()
{
      int n;
      while (cin >> n)
      {
            cout << "(" << v[n - 1].first << ", " << v[n - 1].second << ")\n";
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      sieve();
      for (int i = 1; i + 2 < N; i++)
      {
            if (is_prime[i] && is_prime[i + 2])
            {
                  v.push_back({i, i + 2});
            }
      }
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}