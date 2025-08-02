#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int n = 1e5 + 9;
char num[n];
void solve()
{
      cin >> num;
      int len = strlen(num);
      if (len == 1)
      {
            cout << 0 << endl;
            return;
      }
      int sum = 0;
      for (int i = 0; i < len; i++)
      {
            sum += num[i] - '0';
      }
      int ans = 1;
      while (sum > 9)
      {
            int temp = 0;
            while (sum > 0)
            {
                  temp += sum % 10;
                  sum /= 10;
            }
            sum = temp;
            ans++;
      }
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}