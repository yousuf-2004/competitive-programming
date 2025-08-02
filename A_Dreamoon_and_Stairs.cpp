#include <iostream>
using namespace std;

int main()
{
    int a, b, d = 0, n;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        n = (a / 2);
    }
    else
    {
        n = ((a / 2) + 1);
    }

    for (int i = n; i <= n * 2; i++)
    {
        if (n % b == 0)
        {
            d = n;
            break;
        }
        n++;
    }

    if (d > a)
    {
        cout << -1 << endl;
    }

    else
    {
        cout << d << endl;
    }
}