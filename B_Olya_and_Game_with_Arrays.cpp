#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int mn = INT_MAX;
    vector<int> mn2;
    while (n--)
    {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        int min_el = *min_element(v.begin(), v.end());
        mn = min(mn, min_el);
        v.erase(find(v.begin(), v.end(), min_el));
        mn2.push_back(*min_element(v.begin(), v.end()));
    }
    cout << mn + (long long)accumulate(mn2.begin(), mn2.end(), 0ll) - *min_element(mn2.begin(), mn2.end()) << endl;
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