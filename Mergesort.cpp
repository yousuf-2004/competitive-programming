#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 9;
int a[N], n;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
vector<int> merge(vector<int> &l, vector<int> &r)
{
      vector<int> ans;
      int i = 0, j = 0;
      while (i < l.size() and j < r.size())
      {
            if (l[i] <= r[j])
            {
                  ans.push_back(l[i]);
                  i++;
            }
            else
            {
                  ans.push_back(r[j]);
                  j++;
            }
      }
      while (i < l.size())
      {
            ans.push_back(l[i]);
            i++;
      }
      while (j < r.size())
      {
            ans.push_back(r[j]);
            j++;
      }
      return ans;
}
vector<int> merge_sort(int l, int r)
{
      if (l == r)
      {
            return vector<int>({a[l]});
      }
      int mid = (l + r) / 2;
      vector<int> L = merge_sort(l, mid);
      vector<int> R = merge_sort(mid + 1, r);
      return merge(L, R);
}
void solve()
{
      int x;
      while (cin >> x)
      {
            a[n] = x;
            n++;
      }
      auto ans = merge_sort(0, n - 1);
      for (auto a : ans)
      {
            cout << a << ' ';
      }
      cout << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}