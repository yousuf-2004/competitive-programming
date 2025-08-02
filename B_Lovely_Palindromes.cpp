#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string num = n;
    reverse(num.begin(), num.end());
    if (n.length() < 2)
    {
        cout << n << n << endl;
    }
    else
    {
        cout << n << num;
        cout << endl;
    }
}