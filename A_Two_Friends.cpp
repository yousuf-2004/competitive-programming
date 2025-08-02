#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minInvitations(vector<int>& p) {
    int n = p.size();
    vector<int> count(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        int friendIndex = p[i];
        count[friendIndex]++;
    }

    int maxCount = 0;
    for (int i = 1; i <= n; ++i) {
        maxCount = max(maxCount, count[i]);
    }

    return max(2, maxCount + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        cout << minInvitations(p) << endl;
    }

    return 0;
}

