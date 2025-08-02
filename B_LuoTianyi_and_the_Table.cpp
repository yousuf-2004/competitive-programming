#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      ll n, m;
      cin >> n >> m;
      vector<ll> v(n * m);
      for (int i = 0; i < n * m; i++)
      {
            cin >> v[i];
      }
      sort(v.begin(), v.end());
      ll largest = v[(n * m) - 1];
      ll second_largest = v[(n * m) - 2];
      ll smallest = v[0];
      ll second_smallest = v[1];
      ll ans = 0, ans1 = 0;
      if (n > m)
      {
            ans = (largest - smallest) * (n - 1) * m;
            ans += (largest - second_smallest) * (m - 1);

            ans1 = (largest - smallest) * (n - 1) * m;
            ans1 += (second_largest - smallest) * (m - 1);
      }
      else
      {
            ans = (largest - smallest) * (m - 1) * n;
            ans += (largest - second_smallest) * (n - 1);

            ans1 = (largest - smallest) * (m - 1) * n;
            ans1 += (second_largest - smallest) * (n - 1);
      }
      cout << max(ans, ans1) << endl;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}
