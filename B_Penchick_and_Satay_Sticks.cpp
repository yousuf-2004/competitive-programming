#include <bits/stdc++.h>
#define int long long
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
      vector<int> p(n);
      for (int i = 0; i < n; ++i) {
            cin >> p[i];
      }

      // Create a sorted version of p to compare
      vector<int> sorted_p = p;
      sort(sorted_p.begin(), sorted_p.end());

      // Try to match the sorted permutation by rotating the array
      bool possible = false;
      for (int i = 0; i < n; ++i) {
            // Rotate the array to check if it matches the sorted version
            rotate(p.begin(), p.begin() + 1, p.end());
            if (p == sorted_p) {
                  possible = true;
                  break;
            }
      }

      // Output the result based on the check
      if (possible) {
            cout << "YES" << endl;
      } else {
            cout << "NO" << endl;
      }
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}
