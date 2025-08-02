#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int mx = 0;
    int index;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
        if (v[i] > mx)
        {
            mx = v[i];
            index = i;
        }
    }

    int count = 0;

    for (int i = index + 1; i < v.size(); i++)
    {
        if (v[i] > v[i - 1])
        {
            count = 1;
            break;
        }
    }
    for (int i = index - 1; i >= 0; i--)
    {
        if (v[i] > v[i + 1])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}