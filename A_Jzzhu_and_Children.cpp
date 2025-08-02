#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    double m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double mx = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (mx <= ceil(a[i] / m))
        {
            mx = ceil(a[i] / m);
            ans = i;
        }
    }
    cout << ans + 1 << endl;
}