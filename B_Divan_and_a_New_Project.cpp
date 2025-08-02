#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void yousuf()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin() + 1, v.end(), greater<pair<int, int>>());

    long long total = 0;
    long long d = 1;
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        total += 2 * (v[i].first * d);
        if (i % 2 != 0)
        {
            pos[v[i].second] = d;
        }
        else
        {
            pos[v[i].second] = -d;
            d++;
        }
    }
    cout << total << "\n";
    for (int i = 0; i <= n; i++)
    {
        cout << pos[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        yousuf();
    }
}