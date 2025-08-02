#include <iostream>

using namespace std;
int main()
{
    int n, m = 0;
    cin >> n;
    while (n)
    {
        if (n & 1)
        {
            m++;
        }
        n >>= 1;
    }
    cout << m << endl;
}