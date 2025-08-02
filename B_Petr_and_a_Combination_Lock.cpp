#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int total = 1 << n;

    int sum = 0;

    int cnt = 0;

    for (int i = 0; i < total; i++)
    {
        sum = 0;

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += v[j];
            }
            else
            {
                sum -= v[j];
            }
        }

        if (sum % 360 == 0)
        {
            cnt++;
        }
    }
    if (cnt >= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    solve();
}