#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    int min_sum = sum;
    int flag = 1;
    // sliding window technique
    for (int i = 1; i <= n - k; i++)
    {
        sum = sum - a[i - 1] + a[i + k - 1];
        if (sum < min_sum)
        {
            min_sum = sum;
            flag = i + 1;
        }
    }

    cout << flag << endl;
}

int main()
{
    solve();
}
