#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int cnt = 0;

    while (y > 0 || x > 0)
    {
        cnt++;
        int s = 15;

        int g = 2;
        int a = min(g, y);
        s -= a * 4;
        y -= a;

        int use = min(s, x);
        x -= use;
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


    k
}
