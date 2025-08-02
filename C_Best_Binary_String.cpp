#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    char c = '0';
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            s[i] = c;
        }
        c = s[i];
    }
    cout << s << endl;
    return;
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