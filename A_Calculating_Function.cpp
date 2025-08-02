#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long even = 0;
    long long odd = 0;
    if (n % 2 == 0)
    {
        even = n / 2;
        odd = n / 2;
    }
    else
    {
        n++;
        odd = n / 2;
        even = (n - 1) - odd;
    }
    long long even_total = even * (even + 1);
    long long odd_total = odd * odd;
    cout << even_total - odd_total << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}