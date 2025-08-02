#include <iostream>
#include <vector>
using namespace std;
int arr[24][60];
int main()
{
    int n;
    cin >> n;
    int cash = 0;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr[a][b]++;

        if (arr[a][b] > cash)
        {
            cash = arr[a][b];
        }
    }
    cout << cash << endl;
}