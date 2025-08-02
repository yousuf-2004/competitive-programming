#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
long long mod_exp(long long base, long long exp, long long mod)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    long long results = mod_exp(2, n, MOD);
    cout << results << endl;
}