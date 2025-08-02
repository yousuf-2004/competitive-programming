#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

bool f(int n, vector<int> &a, int b_val)
{
      if (n == 0)
            return true;

      int prev = min(a[0], b_val - a[0]);

      for (int i = 1; i < n; i++)
      {
            int current = a[i];
            int option1 = current;
            int option2 = b_val - current;
            vector<int> op;

            if (option1 >= prev)
                  op.push_back(option1);
            if (option2 >= prev)
                  op.push_back(option2);
            if (op.empty())
                  return false;

            prev = *min_element(op.begin(), op.end());
      }

      return true;
}

void solve()
{
      int n, m;
      cin >> n >> m;

      vector<int> a(n);
      for (int i = 0; i < n; i++)
            cin >> a[i];

      vector<int> b(m);
      for (int i = 0; i < m; i++)
            cin >> b[i];

      int b_val = b[0];

      if (f(n, a, b_val))
      {
            cout << "YES" << endl;
      }
      else
      {
            cout << "NO" << endl;
      }
}
int main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}