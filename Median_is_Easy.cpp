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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      priority_queue<int> pq;
      priority_queue<int, vector<int>, greater<int>> q;

      for (int i = 0; i < n; i++)
      {
            int val = a[i] % 10;

            if (pq.empty() || val <= pq.top())
            {
                  pq.push(val);
            }
            else
            {
                  q.push(val);
            }

            if (pq.size() > q.size() + 1)
            {
                  q.push(pq.top());
                  pq.pop();
            }
            else if (q.size() > pq.size())
            {
                  pq.push(q.top());
                  q.pop();
            }

            cout << pq.top() << " ";
      }
      cout << "\n";
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