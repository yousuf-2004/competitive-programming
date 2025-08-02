#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }

    int sum = 0, cnt = 0;
    while (true)
    {
        for (int i = 0; i < 7; i++)
        {
            sum += v[i];
            if (sum >= n)
            {
                cnt = i + 1;
                break;
            }
        }
        if (sum >= n)
        {
            break;
        }
    }

    cout << cnt << endl;
}
