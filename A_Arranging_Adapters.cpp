#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    sort(v.begin(), v.end());
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + v[i] > s * 3)
        {
            break;
        }
        sum += v[i];
        count++;
    }

    cout << count + 1 << endl;
}

int main()
{
    solve();
}