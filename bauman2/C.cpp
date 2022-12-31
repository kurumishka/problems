#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

int ans = 1e9;
V(int) res;

void count(V(int)& av, int sum, int cur, V(int)& l) {
    if (sum == 0) {
        if (ans > cur) {
            ans = cur;
            res = l;
        }
        return;
    }
    if (av.size() == 0) return;
    int m = 1e9;
    for (auto &x : av) if (x < m) m = x;
    if (sum < m) return;
    V(int) v_new (av.size()-1);
    auto it = v_new.begin();
    for (int i = 0; i < av.size(); i++) {
        if (av[i] > sum) continue;
        for (int j = 0; j < av.size(); j++) {
            if (i == j) continue;
            *it = av[j];
            it++;
        }
        l.pb(av[i]);
        count(v_new, sum-av[i], cur+1, l);
        l.pop_back();
        it = v_new.begin();
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    V(int) v(k);
    for (auto &x : v)
        cin >> x;
    V(int) empty;
    for (int i = 0; i < k; i++)
        count(v, n, 0, empty);
    if (ans == 1e9) {
        cout << "NO" << endl;
        return;
    }
    cout << ans << endl;
    sort(all(res), [](int& a, int& b){return a > b;});
    for (auto &x : res) cout << x << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
