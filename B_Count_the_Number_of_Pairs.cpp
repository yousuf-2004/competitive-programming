#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int N=26;
    string s;
    cin >> s;
    vector<int> big_freq(N, 0), small_freq(N, 0);
    for (auto &i : s)
    {
        if ('A' <= i && 'Z' >= i)
        {
            big_freq[i - 'A']++;
        }
        else
        {
            small_freq[i - 'a']++;
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int pairs = min(big_freq[i], small_freq[i]);

        ans += pairs;

        big_freq[i] -= pairs, small_freq[i] -= pairs;

        int operation = min(k, max(big_freq[i], small_freq[i]) / 2);

        k -= operation, ans += operation;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}