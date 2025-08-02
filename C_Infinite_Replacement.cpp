/* #include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    if (t == "a")
    {
        cout << 1 << endl;
    }
    else if (t.find('a') != string::npos)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (long long int)pow(2, s.length()) << endl;
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
} */


num1 = int(input("Enter an integer: "))
num2 = float(input("Enter a floating-point number: "))

print("Integer:", num1, ", Data type:", type(num1))
print("Floating-point number:", num2, ", Data type:", type(num2))