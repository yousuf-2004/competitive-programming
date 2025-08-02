#include <iostream>
#include <deque>
using namespace std;

void solve()
{
    int n, a;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (d.empty() || a < d[0])
        {
            d.push_front(a);
        }
        else
        {
            d.push_back(a);
        }
    }
    for (auto a : d)
    {
        cout << a << " ";
    }
    cout << endl;
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