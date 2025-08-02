#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (is_sorted(s.begin(), s.end()))
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;

    if (s.back() == '0')
    {
        int r = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                while (i > -1 and s[i] == '1')
                {
                    swap(s[i], s[r]);
                    i--;
                    r--;
                }
                break;
            }
        }
        ans++;
    }
    if (is_sorted(s.begin(), s.end()))
    {
        cout << 1 << endl;
        return;
    }
    bool switched = false;
    for (int i = n - 1; i >= 0; i--)
    {
        if (switched)
        {
            if (s[i] == '1' and (i == 0 or s[i - 1] == '0'))
            {
                ans += 2;
            }
        }
        else
        {
            if (s[i] == '0')
            {
                switched = true;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
