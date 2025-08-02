#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<string> v;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
void update_v(string file)
{
      if (file.size() > 0)
      {
            if (file == "..")
            {
                  if (v.size() > 0)
                  {
                        v.pop_back();
                  }
            }
            else
            {
                  v.push_back(file);
            }
      }
}
void solve()
{
      string s;
      cin >> s;
      if (s == "pwd")
      {

            for (auto a : v)
            {
                  cout << '/' << a;
            }
            cout << '/' << '\n';
      }
      else
      {
            string st;
            cin >> st;
            if (st[0] == '/')
            {
                  v.clear();
            }
            string file = "";
            for (int i = 0; i < st.size(); i++)
            {
                  if (st[i] == '/')
                  {
                        update_v(file);
                        file = "";
                  }
                  else
                  {
                        file += st[i];
                  }
            }
            update_v(file);
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}