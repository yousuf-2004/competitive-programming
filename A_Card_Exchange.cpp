#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> cards(n);
        unordered_map<int, int> freq;

        // Input the numbers written on the cards
        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
            freq[cards[i]]++;
        }

        int minCardsLeft = 0;

        // Count the minimum number of cards left
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            minCardsLeft += (it->second % k == 0) ? it->second : ((it->second / k) * k);
        }

        cout << minCardsLeft << endl;
    }

    return 0;
}
