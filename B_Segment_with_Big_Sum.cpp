#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
void solve()
{
    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    long long sum = 0;
    int mn = n + 1;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum >= s)
        {
            mn = min(mn, r - l + 1);
            sum -= a[l];
            l++;
        }
    }
    if (mn == n + 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << mn << endl;
    }
}

int main()
{
    solve();
}