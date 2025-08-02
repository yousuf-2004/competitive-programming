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
      ll n;
      cin >> n;
      vector<ll> v(n);
      for (ll i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      if (v[0] != n && v[n - 1] != n)
      {
            cout << -1 << endl;
      }
      else
      {
            for (int i = n - 1; i >= 0; i--)
            {
                  cout << v[i] << " ";
            }
            cout << endl;
      }
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