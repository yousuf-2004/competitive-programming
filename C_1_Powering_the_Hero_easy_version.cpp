#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> s(n);
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
  }

  int ans = 0;
  vector<int> buffs(n + 1);
  fill(buffs.begin(), buffs.end(), 0);

  for (int e : s) {
    if (e > 0) {
      buffs.push_back(e);
      sort(buffs.rbegin(), buffs.rend()); 
    } else {
      ans += buffs.back();
      buffs.pop_back();
    }
  }

  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    solve();
  }

  return 0;
}

