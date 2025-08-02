#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    long long n;
    cin >> n;
    vector<long long> v;
    if (n == 1)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 1 << " " << 2 << endl;
        return;
    }
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (long long  i = 0; i < v.size() - 1; i++)
    {
        long long LCM = lcm(v[i], v[i + 1]);
        if (LCM == n)
        {
            cout << v[i] << " " << v[i + 1] << endl;
            return;
        }
    }
}

int main()
{
    solve();
    return 0;
}
