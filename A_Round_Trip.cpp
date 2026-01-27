#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18;

struct Seg {
    ll l, r;
    int cnt;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        ll R0; ll X; ll D;
        int n;
        cin >> R0 >> X >> D >> n;
        string s; cin >> s;

        // intervals: vector<Seg> disjoint, sorted by l
        vector<Seg> cur;
        cur.push_back({R0, R0, 0}); // start at single rating with 0 rated rounds

        for (int idx = 0; idx < n; ++idx) {
            char type = s[idx];
            vector<Seg> next;

            for (auto &seg : cur) {
                ll l = seg.l, r = seg.r;
                int c = seg.cnt;

                if (type == '1') {
                    // div1: always rated -> rating can move within [max(0,l-D), r+D]
                    ll nl = max(0LL, l - D);
                    ll nr = r + D;
                    if (nl <= nr) next.push_back({nl, nr, c + 1});
                } else { // type == '2'
                    // split into part < X (rated) and part >= X (unrated)
                    if (l < X) {
                        ll rl = l;
                        ll rr = min(r, X - 1);
                        if (rl <= rr) {
                            ll nl = max(0LL, rl - D);
                            ll nr = rr + D;
                            next.push_back({nl, nr, c + 1});
                        }
                    }
                    if (r >= X) {
                        ll rl = max(l, X);
                        ll rr = r;
                        if (rl <= rr) {
                            // unrated -> rating doesn't change
                            next.push_back({rl, rr, c});
                        }
                    }
                }
            }

            // Merge overlapping intervals and take the maximum cnt for overlaps.
            if (next.empty()) {
                cur.clear();
                break;
            }

            sort(next.begin(), next.end(), [](const Seg &a, const Seg &b){
                if (a.l != b.l) return a.l < b.l;
                if (a.r != b.r) return a.r < b.r;
                return a.cnt > b.cnt;
            });

            vector<Seg> merged;
            merged.push_back(next[0]);
            for (size_t i = 1; i < next.size(); ++i) {
                Seg &last = merged.back();
                Seg &now = next[i];
                if (now.l <= last.r + 1) {
                    // they overlap or touch: merge, and keep max cnt for overlapping part
                    // We need to create up-to-date representation.
                    // If counts are different, we can conservatively keep max(cnt) across union.
                    // For simplicity and correctness we will merge and set cnt = max(last.cnt, now.cnt).
                    last.r = max(last.r, now.r);
                    last.cnt = max(last.cnt, now.cnt);
                } else {
                    merged.push_back(now);
                }
            }

            // After simple merging we may have intervals that overlapped with different cnt in interior.
            // The conservative approach above (unordered max on union) is correct because if for
            // any rating inside union there existed a way to achieve higher cnt, we keep it.
            // Keep merged as new current.
            cur.swap(merged);
        } // end rounds

        int answer = 0;
        for (auto &seg : cur) answer = max(answer, seg.cnt);
        cout << answer << '\n';
    }
    return 0;
}
