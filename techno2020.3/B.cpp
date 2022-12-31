#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int n;
    cin >> n;
    V(int) q(n), p(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
        p[i] = n-i;
    }
    int cur = q.back();
    V(int) ans(n, 0);
    set<int> used;
    for (int i = n-1; i >= 1; i--) {
        if (q[i] == cur && q[i-1] != cur) {
            ans[i] = cur;
            used.insert(cur);
            cur = q[i-1];
        }
    }
    if (ans[0] == 0) {
        ans[0] = cur;
        used.insert(cur);
    }
    auto it = p.rbegin();
    for (int i = 0; i < n; i++) {
        if (ans[i] == 0) {
            if (*it < cur && !used.count(*it)) {
               ans[i] = *it;
               it++;
               used.insert(ans[i]);
            }
            else {
                while(used.count(*it) && it != p.rend()) it++;
                if (it == p.rend() || *it > cur) {cout << -1 << endl;return;}
                used.insert(*it);
                ans[i] = *it;
                it++;
            }
        }
        else {
            cur = ans[i];
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
} 

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}
