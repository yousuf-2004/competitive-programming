#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> arr(s.length());
    
    for (int i = 0; i < s.length(); i++) {
        arr[i] = s[i] - '0';
    }

    int zeroes = count(arr.begin(), arr.end(), 0);

    int cnt[2] = {0, 0};
    long long ans = 0;

    for (int c : arr) {
        cnt[c]++;
        if (c == 0) {
            ans += (cnt[1] > 0) ? 1 : 0;  
        } else {
            ans += (zeroes - cnt[0]);  
        }
    }
    
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}