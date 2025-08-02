#include <bits/stdc++.h>
using namespace std;

int calculateTypingTime(const string &s)
{
    int time = 2;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
    }
    return time;
}

void solve()
{
    string s;
    cin >> s;

    int maxTime = 0;
    string bestString = s;

    for (char letter = 'a'; letter <= 'z'; ++letter)
    {
        for (int i = 0; i <= s.length(); ++i)
        {
            string newString = s.substr(0, i) + letter + s.substr(i);
            int currentTime = calculateTypingTime(newString);
            if (currentTime > maxTime)
            {
                maxTime = currentTime;
                bestString = newString;
            }
        }
    }

    cout << bestString << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
