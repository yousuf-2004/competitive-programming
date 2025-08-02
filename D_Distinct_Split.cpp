#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        vector<int> pref(n, 0), suf(n, 0);
        set<char> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(st[i]);
            pref[i] = s.size();
        }
        s.clear();
        for (int i = n - 1; i > -1; i--)
        {
            s.insert(st[i]);
            suf[i] = s.size();
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, pref[i] + suf[i + 1]);
        }
        cout << ans << endl;
    }
}