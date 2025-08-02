#include <bits/stdc++.h>
#define int long long
using namespace std;

string a;
int cnt = 0;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int cnt_vowel(int i, string &a)
{
      if (i < 0)
            return 0;
      int count = (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U');
      return count + cnt_vowel(i - 1, a);
}

void solve()
{
      string a;
      getline(cin, a);
      int cnt = cnt_vowel(a.size() - 1, a);
      cout << cnt << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}