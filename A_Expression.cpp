#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans1 = a + b * c;
    int ans2 = a * (b + c);
    int ans3 = a * b * c;
    int ans4 = (a + b) * c;
    int ans5 = a + b + c;
    int cnt = 0;
    cnt = max(ans1, ans2);
    cnt = max(cnt, ans3);
    cnt = max(cnt, ans4);
    cnt = max(cnt, ans5);
    cout << cnt << endl;
}