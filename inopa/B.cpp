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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> m;
    for (auto &x : s)
        m[x]++;
    vector<pair<char,int>> vp;
    for (auto it = m.begin(); it != m.end(); it++)
        vp.pb(*it);
    sort(all(vp), [](pair<char,int> &a, pair<char,int> &b){return a.second > b.second;});
    if (vp.size() < k) {
        cout << 0 << endl;
    }
    else {
        cout << vp[k-1].second*k << endl;
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
