#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      long long n, k, b, s;
      cin >> n >> k >> b >> s;
      vector<long long> a(n);
      a[0] = k * b;
      s -= k * b;
      if (s < 0)
      {
            cout << "-1\n";
            return;
      }
      for (int i = 0; i < n; i++)
      {
            long long v = min(k - 1, s);
            a[i] += v;
            s -= v;
      }
      if (s > 0)
      {
            cout << "-1\n";
      }
      else
      {
            for (int i = 0; i < n; i++)
            {
                  cout << a[i] << " ";
            }
            cout << "\n";
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