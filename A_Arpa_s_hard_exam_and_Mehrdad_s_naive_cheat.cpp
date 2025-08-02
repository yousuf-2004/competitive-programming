#include<iostream>
#include<math.h>
using namespace std;
const int m = 10;
int solve(int a, int b){
    if (b == 0)
        return 1;
    long long res = solve(a, b / 2);
    if (b & 1){
        return (a * ((res * res) % m) % m);
    }
    else{
        return (res * res) % m;
    }
}
int main(){
    int n;
    cin >> n;
    cout << solve(8, n) << endl;
    return 0;
}
