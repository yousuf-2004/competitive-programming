#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    while (!s.empty())
    {
        int x;
        if (s.back() == 'a' || s.back() == 'e')
        {
            x = 2;
        }
        else
        {
            x = 3;
        }

        while (x--)
        {
            ans += s.back();
            s.pop_back();
        }
        ans += '.';
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());
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