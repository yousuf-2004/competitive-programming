#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n, k;
      cin >> n >> k;
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      bool ok = true;
      for (int i = 0; i < n - k; i++)
      {
            if (b[i] != -1 && b[i] != a[i])
            {
                  ok = false;
                  break;
            }
      }
      for (int i = k; i < n; i++)
      {
            if (b[i] != -1 && b[i] != a[i])
            {
                  ok = false;
                  break;
            }
      }

      if (!ok)
      {
            cout << "NO\n";
            return;
      }

      vector<int> freq(n + 1, 0);

      for (int i = n - k; i < k; i++)
      {
            freq[a[i]]++;
      }  
      for (int i = n - k; i < k; i++)
      {
            if (b[i] != -1)
            {
                  if (freq[b[i]] == 0)
                  {
                        ok = false;
                        break;
                  }
                  freq[b[i]]--;
            }
      }
      if (ok)
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
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