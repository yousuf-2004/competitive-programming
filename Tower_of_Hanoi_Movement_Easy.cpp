#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n, a, cnt;
void find(int disk, char start, char end, char mid)
{
      if (disk == 0)
      {
            return;
      }
      find(disk - 1, start, mid, end);
      cnt++;
      if (cnt == a)
      {
            cout << disk << " : " << start << " => " << end << '\n';
      }
      find(disk - 1, mid, end, start);
}
void solve()
{
      cin >> n >> a;
      cnt = 0;
      find(n, 'A', 'C', 'B');
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