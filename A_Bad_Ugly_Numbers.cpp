#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    v[0] = 2;
    for (int i = 1; i < n; i++)
    {
        v[i] = 9;
    }
    if (n == 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        for (auto u : v)
        {
            cout << u;
        }
        cout << endl;
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