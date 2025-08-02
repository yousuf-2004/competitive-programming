#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void Yousuf()
{
    int n;
    cin >> n;
    map<int, int> mp;
    mp[0] = 0;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (mp.find(sum) != mp.end())
        {
            ans++;
            mp.clear();
            mp[0] = 0;
            sum = 0;
        }
        else
        {
            mp[sum]++;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Yousuf();
    }
}
