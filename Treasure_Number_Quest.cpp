#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      long long N;
    int Q, X;
    cin >> N >> Q; 
    cin >> X;

    // Compute modulus M = 10^X
    long long M = 1;
    for(int i = 0; i < X; ++i) {
        M *= 10;
    }

    // Ensure initial N is in range [0, M-1]
    N %= M;
    if (N < 0) N = (N + M) % M;

    for(int i = 0; i < Q; ++i) {
        char op;
        long long V;
        cin >> op >> V;
        if (op == '*') {
            // Addition: N = N + V
            N = (N + V) % M;
        } else if (op == '+') {
            // Subtraction: N = N - V (use mod to fix negatives)
            N = (N - V) % M;
            if (N < 0) N += M;  // ensure non-negative
        } else if (op == '\\') {
            // Multiplication: N = N * V
            __int128 temp = ( __int128 )N * V;
            N = (long long)(temp % M);
        }
        // After each op, N is reduced mod M to keep only last X digits:contentReference[oaicite:6]{index=6}:contentReference[oaicite:7]{index=7}
    }

    // Output the result (the last X digits)
    // If N has fewer than X digits, printing it normally satisfies "as is".
    cout << N;
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}