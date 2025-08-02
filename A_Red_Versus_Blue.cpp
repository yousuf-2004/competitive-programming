#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n, r, b;
      cin >> n >> r >> b;
      int diff = (r + b) / (b + 1);
      string s = "";
      for (int i = 1; i <= r; i++)
      {
            s += 'R';
            if (i % diff == 0 && b > 0)
            {
                  s += 'B';
                  b--;
            }
      }
      for (int i = 0; i < s.size(); i++)
      {
            cout << s[i];
            if (b > 0 && s[i] == 'R' && s[i + 1] == 'R' && i + 1 < s.size())
            {
                  cout << "B";
                  b--;
            }
      }
      cout << endl;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}