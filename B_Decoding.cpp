#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> d;
    bool add = (s.length() % 2 == 0);

    for (char c : s)
    {
        if (add)
        {
            d.push_front(c);
        }
        else
        {
            d.push_back(c);
        }
        add = !add; 
    }

    string ans(d.begin(), d.end());
    cout << ans << endl;
}

int main()
{
    solve();
}