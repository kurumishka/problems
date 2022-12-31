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
    int n, m;
    cin >> n;
    vector<pair<int,int>> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i;
    }
    sort(all(p), [](pair<int,int> &a, pair<int,int> &b){return ((a.first > b.first) || (a.first == b.first && a.second < b.second));});
    cin >> m;
    for (int i = 0; i < m; i++) {
        vector<pair<int,int>> res = p;
        int k, pos;
        cin >> k >> pos;
        sort(res.begin(), res.begin()+k, [](pair<int,int> &a, pair<int,int> &b){return a.second < b.second;});
        cout << res[pos-1].first << endl;
    }
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
