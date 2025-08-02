#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt_ab = 0;
    int cnt_ba = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s.substr(i, 2) == "ab")
        {
            cnt_ab++;
        }
        else if (s.substr(i, 2) == "ba")
        {
            cnt_ba++;
        }
    }
    if (cnt_ab == cnt_ba)
    {
        cout << s << endl;
    }
    else
    {
        cout << s.back() + s.substr(1) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
