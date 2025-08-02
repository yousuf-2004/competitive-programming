#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
       int n, k, d, w;
       cin >> n >> k >> d >> w;
       vector<int> a(n);
       for (int i = 0; i < n; i++)
              cin >> a[i];

       int cnt = 0;
       int pack = 0;
       while (cnt < n)
       {
              int time = a[cnt] + d + w;
              int i = cnt;
              while (i < n && i < cnt + k && a[i] <= time)
              {
                     i++;
              }
              pack++;
              cnt = i;
       }
       cout << pack << endl;
}

int main()
{
       int t;
       cin >> t;
       while (t--)
              solve();
       return 0;
}