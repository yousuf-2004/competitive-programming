#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            v[i] = i + 1;
      }
      while (v.size() > 1)
      {
            vector<int> temp;
            for (int i = 0; i < v.size(); i++)
            {
                  if (i % 2 == 1)
                  {
                        cout << v[i] << " ";
                  }
                  else
                  {
                        temp.push_back(v[i]);
                  }
            }
            if (v.size() % 2 == 0)
            {
                  v = temp;
            }
            else
            {
                  int first = temp.back();
                  temp.pop_back();
                  v.clear();
                  v.push_back(first);
                  for (int i = 0; i < temp.size(); i++)
                  {
                        v.push_back(temp[i]);
                  }
            }
      }
      cout << v[0] << endl;
}

signed main()
{
      /* int t;
      cin >> t;
      while (t--) */
      solve();
      return 0;
}