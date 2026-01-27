#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e6 + 9;
bool is_prime[N];
void sieve()
{
      is_prime[1] = false;
      for (int i = 2; i < N; i++)
      {
            is_prime[i] = true;
      }
      for (int i = 2; i * i < N; i++)
      {
            if (is_prime[i])
            {
                  for (int j = i + i; j < N; j += i)
                  {
                        is_prime[j] = false;
                  }
            }
      }
}
bool has_digit_zero(int x)
{
      while (x)
      {
            if (x % 10 == 0)
            {
                  return true;
            }
            x /= 10;
      }
      return false;
}

bool is_valid(int x)
{
      if (!is_prime[x])
      {
            return false;
      }
      if (has_digit_zero(x))
      {
            return false;
      }
      string s = to_string(x);
      int len = s.size();
      for (int i = 0; i < len; i++)
      {
            string suf = s.substr(i);
            int suf_as_int = stoi(suf);
            if (!is_prime[suf_as_int])
            {
                  return false;
            }
      }
      return true;
}
int cnt_valid_in_prefix[N];
bool valid[N];
void solve()
{
      int n;
      cin >> n;
      cout << cnt_valid_in_prefix[n] << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      sieve();
      for (int i = 1; i < N; i++)
      {
            valid[i] = is_valid(i);
      }
      for (int i = 1; i < N; i++)
      {
            cnt_valid_in_prefix[i] = cnt_valid_in_prefix[i - 1] + valid[i];
      }
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}