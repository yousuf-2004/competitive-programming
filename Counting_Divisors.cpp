#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 9;
int d[N];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            d[j]++;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }
}
