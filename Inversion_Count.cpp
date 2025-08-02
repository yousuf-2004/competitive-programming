#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2e5 + 9;
int a[N];
int div_con(int l, int r)
{
      if (l >= r)
      {
            return 0;
      }
      int mid = (l + r) / 2;
      int ans = div_con(l, mid);
      ans += div_con(mid + 1, r);
      vector<int> v;
      for (int i = mid + 1; i <= r; i++)
      {
            v.push_back(a[i]);
      }
      sort(v.begin(), v.end());
      for (int i = l; i <= mid; i++)
      {
            ans += (lower_bound(v.begin(), v.end(), a[i]) - v.begin());
      }
      return ans;
}
void solve()
{
      int n;
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      cout << div_con(1, n) << '\n';
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