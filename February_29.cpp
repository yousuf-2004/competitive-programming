#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int leap_year(int year)
{
      int ans = year / 4;
      ans -= (year / 100);
      ans += (year / 400);
      return ans;
}
int cnt(int start_year, int end_year)
{
      return leap_year(end_year) - leap_year(start_year - 1);
}
void solve()
{
      string start_month;
      int start_date, start_year;
      char dot;
      cin >> start_month >> start_date >> dot >> start_year;

      string end_month;
      int end_date, end_year;
      char d;
      cin >> end_month >> end_date >> d >> end_year;

      if (start_month == "January" || start_month == "February")
      {
      }
      else
      {
            start_year++;
      }
      if (end_month == "January" || (end_month == "February" && end_date < 29))
      {
            end_year--;
      }
      cout << cnt(start_year, end_year) << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      for (int i = 1; i <= t; i++)
      {
            cout << "Case " << i << ": ";
            solve();
      }
      return 0;
}