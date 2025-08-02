#include <bits/stdc++.h>
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
    multiset<int> numbers;
    for (int i = 1; i <= n; i++)
    {
        numbers.insert(i);
    }
    vector<pair<int, int>> pairs;
    while (numbers.size() > 1)
    {
        auto it1 = prev(numbers.end());
        int a = *it1;
        numbers.erase(it1);
        auto it2 = prev(numbers.end());
        int b = *it2;
        numbers.erase(it2);
        numbers.insert((a + b + 1) / 2);
        pairs.push_back({a, b});
    }
    cout << *numbers.begin() << endl;
    for (const auto &p : pairs)
    {
        cout << p.first << ' ' << p.second << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}