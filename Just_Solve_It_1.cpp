#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
vector<int> v;
void factorize(int x)
{
      v.clear();
      int total = 1;
      int sumofdiv = 1;
      for (int i = 2; i * i <= x; i++)
      {
            if (x % i == 0)
            {
                  int cnt = 0;
                  while (x % i == 0)
                  {
                        x /= i;
                        cnt++;
                        v.push_back(i);
                  }
                  total *= (cnt + 1);
                  int sum = 1, cur = 1;
                  for (int j = 0; j < cnt; j++)
                  {
                        cur *= i;
                        sum += cur;
                  }
                  sumofdiv *= sum * 1ll;
            }
      }
      if (x > 1)
      {
            v.push_back(x);
            total *= 2;
            sumofdiv *= (1 + x);
      }
      set<int> st(v.begin(), v.end());
      cout << v.front() << ' '
           << v.back() << ' '
           << st.size() << ' '
           << v.size() << ' '
           << total << ' '
           << sumofdiv << '\n';
}

void solve()
{
      int n;
      cin >> n;
      while (n--)
      {
            int x;
            cin >> x;
            factorize(x);
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}