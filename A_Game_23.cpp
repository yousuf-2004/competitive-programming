#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = -1;
    if (m % n == 0)
    {
        ans = 0;
        int a = m / n;
        while (a % 2 == 0)
        {
            a /= 2;
            ans++;
        }
        while (a % 3 == 0)
        {
            a /= 3;
            ans++;
        }
        if (a != 1)
            ans = -1;
    }
    cout << ans << endl;
}