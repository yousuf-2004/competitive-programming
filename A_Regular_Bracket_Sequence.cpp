#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long l = 1, r = 2e18, ans = 0;

    while (l <= r) {
        long long mid = (l + r) / 2;
        long long tt = sqrt(mid);

        // Adjust `tt` to find the exact square root bounds
        while (tt * tt > mid) tt--;
        while ((tt + 1) * (tt + 1) <= mid) tt++;

        long long cnt = mid - tt;

        // If we have enough perfect squares, update answer and reduce `r`
        if (cnt >= n) {
            ans = mid;
            r = mid - 1;
        } 
        // Otherwise, increase the lower bound `l`
        else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
