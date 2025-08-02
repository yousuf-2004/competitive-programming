#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int cnt = 1;
    int mx = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;

            mx = max(mx, cnt);
        }
        else
        {
            cnt = 1;
        }
    }
    cout << mx << endl;
}

int main()
{
    solve();
}