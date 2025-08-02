#include <iostream>
#include <vector>
#include <algorithm>
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

    int mn = *min_element(v.begin(), v.end()); // minimum element.

    for (int i = 0, j = 0; j < n / 2; i++)
    {
        if (v[i] != mn)
        {
            cout << v[i] << ' ' << mn << '\n';
            j++;
        }
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