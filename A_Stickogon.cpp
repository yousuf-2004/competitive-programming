#include <iostream>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i : a)
    {
        mp[i]++;
    }
    int cnt = 0;
    for (auto a : mp)
    {
        if (a.second >= 3)
        {
            cnt += a.second / 3; 
        }
    }
    cout << cnt << endl;
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