#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
    int n;
    cin >> n;
    int pos = 0;
    int move = 1;
    bool turn = true;

    while (true)
    {
        if (turn)
        {
            pos -= move;
        }
        else
        {
            pos += move;
        }

        if (abs(pos) > n)
        {
            if (turn)
            {
                cout << "Sakurako" << endl;
            }
            else
            {
                cout << "Kosuke" << endl;
            }
            return;
        }
        move += 2;
        turn = !turn;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}