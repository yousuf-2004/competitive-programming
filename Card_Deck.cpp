#include <bits/stdc++.h>
// #define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n), b(n);
      map<int, int> mp;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]] = 0;
      }
      sort(b.rbegin(), b.rend());
      int j = 0;
      vector<int> c;
      for (int i = n - 1; i >= 0; i--)
      {
            if (a[i] != b[j])
            {
                  c.push_back(a[i]);
                  mp[a[i]] = 1;
            }
            else
            {
                  c.push_back(a[i]);
                  mp[a[i]] = 1;
                  for (int k = (int)c.size() - 1; k >= 0; k--)
                  {
                        cout << c[k] << ' ';
                  }
                  while (mp[b[j]] == 1)
                  {
                        j++;
                  }
                  c.clear();
            }
      }
      for (int i = (int)c.size() - 1; i >= 0; i--)
      {
            cout << c[i] << ' ';
      }
      cout << '\n';
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}
