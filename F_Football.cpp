#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<pair<int, int>> res;
    int draws = 0;

    for (int i = 0; i < n; i++) {
        // Prefer 1:0 if a > b
        if (a > 0 && b > 0 && a != b) {
            if (a > b) {
                res.push_back({1, 0});
                a--;
            } else {
                res.push_back({0, 1});
                b--;
            }
        }
        else if (a > 0 && b == 0) {
            res.push_back({min(a, 1000), 0});
            a -= res.back().first;
        }
        else if (b > 0 && a == 0) {
            res.push_back({0, min(b, 1000)});
            b -= res.back().second;
        }
        else {
            // Last option: draw
            int d = min(a, b);
            res.push_back({d, d});
            a -= d;
            b -= d;
            draws++;
        }
    }

    cout << draws << '\n';
    for (auto [x, y] : res) {
        cout << x << ":" << y << '\n';
    }

    return 0;
}
