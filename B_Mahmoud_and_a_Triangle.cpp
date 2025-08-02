#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    bool f = true;
    for (int i = n - 1; i >= 2; i--)
    {
        int a = arr[i] + arr[i - 1];
        int b = arr[i - 1] + arr[i - 2];
        int c = arr[i - 2] + arr[i];
        if (a > arr[i - 2] && b > arr[i] && c > arr[i - 1])
        {
            f = true;
            break;
        }
        else
        {
            f = false;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    solve();
    return 0;
}