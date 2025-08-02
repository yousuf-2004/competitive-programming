#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> divisors(int n)
{
      vector<int> v;
      for (int i = 1; i <= sqrt(n); i++)
      {
            if (n % i == 0)
            {
                  if (n / i == i)
                  {
                        v.push_back(i);
                  }
                  else
                  {
                        v.push_back(i);
                        v.push_back(n / i);
                  }
            }
      }
      return v;
}
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int a, b, l;
      cin >> a >> b >> l;
      vector<int> k = divisors(l);
      int ans = 0;
      int temp;
      vector<int> x, y;
      for (int i = 0; i <= 20; i++)
      {
            temp = pow(a, i);
            if (temp <= 1e6)
            {
                  x.push_back(temp);
            }
            else
            {
                  break;
            }
      }
      for (int i = 0; i <= 20; i++)
      {
            temp = pow(b, i);
            if (temp <= 1e6)
            {
                  y.push_back(temp);
            }
            else
            {
                  break;
            }
      }
      for (int i = 0; i < k.size(); i++)
      {
            int f = 0;
            for (int j = 0; j < x.size(); j++)
            {
                  for (int z = 0; z < y.size(); z++)
                  {
                        if (k[i] * x[j] * y[z] == l)
                        {
                              ans++;
                              f = 1;
                              break;
                        }
                  }
                  if (f == 1)
                  {
                        break;
                  }
            }
      }
      cout << ans << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}