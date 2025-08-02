#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    cout << (n * (n + 2) * (2 * n + 1)) / 8 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
