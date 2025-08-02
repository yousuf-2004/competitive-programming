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
      int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // 1) If already all zeros → Alice
        if (s.find('1') == string::npos) {
            cout << "Alice\n";
            return;
        }

        // 2) Check for any length-k substring of all '0'
        int zeroCount = 0;
        bool bobWins = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') zeroCount++;
            if (i >= k && s[i - k] == '0') zeroCount--;
            if (i >= k - 1 && zeroCount == k) {
                bobWins = true;
                break;
            }
        }

        cout << (bobWins ? "Bob\n" : "Alice\n");

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