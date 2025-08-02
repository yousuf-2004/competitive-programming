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
    int l = 0, r = 0;
    long long sum = 0;
    int mx = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum > s)
        {
            sum -= a[l];
            l++;
        }
        mx = max(mx, r - l + 1);
        r++;
    }
    cout << mx << endl;
}

int main()
{
    solve();
}