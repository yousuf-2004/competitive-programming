#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    string b;
    cin >> n >> b;
    string r = b;
    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());

    unordered_map<char, char> mp;
    int len = r.size();
    for (int i = 0; i < len; ++i) {
        mp[r[i]] = r[len - 1 - i];
    }

    string s = b;
    for (int i = 0; i < n; ++i) {
        s[i] = mp[b[i]];
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
