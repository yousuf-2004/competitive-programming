#include <bits/stdc++.h>
using namespace std;

int def(int x, int y)
{
    if (x > y)
    {
        return 1;
    }
    if (x == y)
    {
        return 0;
    }
    if (x < y)
    {
        return -1;
    }
}
void solve()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int cnt = 0;
    if (def(a1, b1) + def(a2, b2) > 0)
    {
        cnt++;
    }
    if (def(a1, b2) + def(a2, b1) > 0)
    {
        cnt++;
    }
    if (def(a2, b1) + def(a1, b2) > 0)
    {
        cnt++;
    }
    if (def(a2, b2) + def(a1, b1) > 0)
    {
        cnt++;
    }
    cout << cnt << endl;
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