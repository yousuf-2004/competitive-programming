#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_l = 0;
        for (int i = 0; i < n; ++i) {
            int l, r;
            cin >> l >> r;
            max_l = max(max_l, l);
        }
        cout << max_l << '\n';
    }
    
    return 0;
}