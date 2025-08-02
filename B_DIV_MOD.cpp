#include <iostream>
using namespace std;

void solve()
{
    int l, r, a;
    cin >> l >> r >> a;

    long long x, ans;

    if (a == 1)
    {
        cout << r << endl;
        return;
    }

    if (r % a == 0)
    {
        if (l == r)
        {
            x = r;
        }
        else
        {
            x = r - 1;
        }
    }
    else
    {
        if (r - (r % a) - 1 >= l)
        {
            x = r - (r % a) - 1;
        }
        else
        {
            x = r;
        }
    }

    ans = (x / a) + (x % a);

    long long ans2 = (r / a) + (r % a);

    ans = max(ans, ans2);
    
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