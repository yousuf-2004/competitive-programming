#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int total_hours = a;
    int remaining_candles = a;

    while (remaining_candles >= b)
    {
        int new_candles = remaining_candles / b;
        total_hours += new_candles;
        remaining_candles = new_candles + remaining_candles % b;
    }

    cout << total_hours << endl;
}
