#include <Bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum_0 = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            sum_0++;
        }
        else if (a[i] >= 2)
        {
            flag = true;
        }
    }
    if (sum_0 <= (n + 1) / 2)
    {
        cout << "0" << endl;
    }
    else if (flag || sum_0 == n)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
    }
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