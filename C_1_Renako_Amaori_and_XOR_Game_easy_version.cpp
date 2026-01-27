#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n), b(n);
      string sa;
        cin >> ws;               // skip any whitespace before reading the line
        getline(cin, sa);
        if(sa.size() == 0) {
            getline(cin, sa);
        }
        // Parse '0'/'1' characters from sa into array a
        int idx = 0;
        for(char c : sa) {
            if(c == '0' || c == '1') {
                if(idx < n) {
                    a[idx++] = c - '0';
                }
            }
        }
        // If we didn't get all bits (in case they were separated by spaces), read remaining
        while(idx < n) {
            char c;
            cin >> c;
            if(c == '0' || c == '1') {
                a[idx++] = c - '0';
            }
        }

        // Read array b similarly
        string sb;
        cin >> ws;
        getline(cin, sb);
        if(sb.size() == 0) {
            getline(cin, sb);
        }
        idx = 0;
        for(char c : sb) {
            if(c == '0' || c == '1') {
                if(idx < n) {
                    b[idx++] = c - '0';
                }
            }
        }
        while(idx < n) {
            char c;
            cin >> c;
            if(c == '0' || c == '1') {
                b[idx++] = c - '0';
            }
        }

        // Compute the XOR (parity) of all bits in a and in b
        int xorA = 0, xorB = 0;
        for(int i = 0; i < n; ++i) {
            xorA ^= a[i];
            xorB ^= b[i];
        }

        // If parities are equal, it's a tie
        if(xorA == xorB) {
            cout << "Tie\n";
            return;
        }

        // Check for a mismatched bit at any odd index (1-indexed)
        // In 0-indexing, odd 1-indexed means i % 2 == 0
        bool oddMismatch = false;
        for(int i = 0; i < n; ++i) {
            if(i % 2 == 0) {  // i = 0 corresponds to index 1 (odd in 1-indexing)
                if(a[i] != b[i]) {
                    oddMismatch = true;
                    break;
                }
            }
        }

        // If there's any odd-index mismatch, Ajsai can force a win; otherwise Mai wins
        if(oddMismatch) {
            cout << "Ajsai\n";
        } else {
            cout << "Mai\n";
        }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}