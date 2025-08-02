#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long l, r;
    cin >> l >> r;

    long long result = l;
    int max_diff = INT_MIN;

    for (long long i = l; i <= r; ++i)
    {
        string s = to_string(i);
        int max_digit = -1, min_digit = 10;

        for (char c : s)
        {
            int digit = c - '0';
            max_digit = max(max_digit, digit);
            min_digit = min(min_digit, digit);
        }

        int diff = max_digit - min_digit;

        if (diff > max_diff)
        {
            max_diff = diff;
            result = i;
        }
        if (max_diff == 9)
        {
            break;
        }
    }

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
