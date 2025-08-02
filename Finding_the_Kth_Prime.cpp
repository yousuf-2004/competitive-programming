#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
vector<int> primes;
bool ar[90000001];
void solve()
{
      int maxN = 90000000;
      ar[0] = ar[1] = true;

      for (int i = 2; i * i <= maxN; i++)
      {
            if (!ar[i])
            {
                  for (int j = i * i; j <= maxN; j += i)
                  {
                        ar[j] = true;
                  }
            }
      }
      for (int i = 2; i <= maxN; i++)
      {
            if (!ar[i])
                  primes.push_back(i);
      }
}

signed main()
{
      int t = 1;
      cin >> t;
      int n;
      solve();
      while (t--)
      {
            cin >> n;
            cout << primes[n - 1] << endl;
      }
}