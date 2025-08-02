#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long temp = 1;
    for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            temp *= 2;
        }
    }
    sort(a.begin(), a.end());
    a[n - 1] *= temp;

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
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
