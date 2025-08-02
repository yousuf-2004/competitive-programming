#include <Bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    map<char, char> converse;
    converse['B'] = 'R';
    converse['R'] = 'B';

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        while (i < n && s[i] == '?')
        {
            i++;
        }
        if (i == n)
        {
            break;
        }

        if ((i - ans.size()) % 2)
        {
            char cons = s[i];
            for (int j = ans.size(); j <= i; j++)
            {
                ans += converse[cons];
                cons = converse[cons];
            }
        }
        else
        {
            char cons = converse[s[i]];
            for (int j = ans.size(); j <= i; j++)
            {
                ans += converse[cons];
                cons = converse[cons];
            }
        }
    }

    if (ans.size() == 0)
    {
        char c = 'B';
        for (int i = 0; i < n; i++)
        {
            ans += c;
            c = converse[c];
        }
    }
    while (ans.size() < n)
    {
        int last = ans.size();
        ans += converse[ans[last - 1]];
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