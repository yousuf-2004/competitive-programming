#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt_upper = 0;
    int cnt_lower = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt_lower++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cnt_upper++;
        }
    }
    if (cnt_lower >= 1)
    {
        cout << s << endl;
    }
    else if (cnt_lower == 0 && s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << endl;
    }
}

int main()
{
    solve();
    return 0;
}