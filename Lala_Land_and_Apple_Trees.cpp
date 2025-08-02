#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int amount_of_apples(deque<pair<int, int>> left, deque<pair<int, int>> right)
{
      int total_apple = 0;
      while (true)
      {
            if (left.empty())
            {
                  break;
            }
            total_apple += left[0].second;
            left.pop_front();
            if (right.empty())
            {
                  break;
            }
            total_apple += right[0].second;
            right.pop_front();
      }
      return total_apple;
}

void solve()
{
      int n;
      cin >> n;
      deque<pair<int, int>> left, right;
      for (int i = 0; i < n; i++)
      {
            int direction, apple;
            cin >> direction >> apple;
            if (direction < 0)
            {
                  left.push_back({-direction, apple});
            }
            else
            {
                  right.push_back({direction, apple});
            }
      }
      sort(left.begin(), left.end());
      sort(right.begin(), right.end());
      int total_apple = amount_of_apples(left, right);
      total_apple = max(total_apple, amount_of_apples(right, left));
      cout << total_apple << '\n';
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