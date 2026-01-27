#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int MAX = 200000;
int ans[MAX + 1];

int digitSum(int x)
{
      int s = 0;
      while (x)
      {
            s += x % 10;
            x /= 10;
      }
      return s;
}

void precompute()
{
      ans[0] = 0;
      for (int i = 1; i <= MAX; i++)
      {
            ans[i] = ans[i - 1] + digitSum(i);
      }
}

void solve()
{
      int n;
      cin >> n;
      cout << ans[n] << "\n";
}
signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      precompute();
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}