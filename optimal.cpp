#include <bits/stdc++.h>
using namespace std;



int main()
{
      int n, f; 
      cin >> n;

      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      cin >> f;

      vector<int> fs;
      int miss = 0;

      for (int i = 0; i < n; i++)
      {
            bool found = false;
            for (int x : fs)
            {
                  if (x == v[i])
                  {
                        found = true;
                  }
            }
            if (!found)
            {
                  if (fs.size() < f)
                  {
                        fs.push_back(v[i]);
                  }
                   else
                  {
                        int idx = -1, far = i + 1;
                        for (int j = 0; j < fs.size(); j++)
                        {
                              int k;
                              for (k = i + 1; k < n; k++)
                                    if (fs[j] == v[k])
                                          break;
                              if (k > far)
                              {
                                    far = k;
                                    idx = j;
                              }
                        }
                        if (idx == -1)
                              idx = 0;
                        fs[idx] = v[i];
                  }
                  miss++;
            }
      }

      cout << miss << '\n';
      cout<<n-miss<<'\n';
      double hit_ratio,miss_ratio;
      hit_ratio=((n-miss)/(double)n)*100.00;
      cout<<hit_ratio<<'\n';
      miss_ratio=(miss/(double)n)*100.00;
      cout<<miss_ratio;
      return 0;
}
