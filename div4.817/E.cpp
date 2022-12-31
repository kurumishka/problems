#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define int long long

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    map<int, V<int>> sums, m;
    V<pair<int,int>> res(n);
    for (auto&[l, r] : res)
        cin >> l >> r;
    sort(all(res));
    set<int> ff;
    V<int> hes;
    for (int i = 0; i < n; ++i) {
        auto [h, w] = res[i];
        ff.insert(h);
        m[h].pb(w);
    }
    for(auto& x : ff)
        hes.pb(x);
    for (auto it = m.begin(); it != m.end(); ++it) {
        sums[it->first] = V<int> ((int)it->second.size());
        for (int i = 0; i < (int)it->second.size(); ++i)
            sums[it->first][i] = (i == 0 ? it->first*it->second[0] : sums[it->first][i-1]+it->second[i]*it->first);
    }
    auto Bin = [&](int lim, V<int>& a){
        int k = -1;
        int d = (int)a.size();
        for (int z = d+1; z >= 1; z/=2)
            while (z+k < d && a[z+k] <= lim)
                k+=z;
        return k;
    };
    for (int l = 0; l < q; ++l) {
        int hs, ws, hb, wb, s = 0;
        cin >> hs >> ws >> hb >> wb;
        int k = Bin(hs, hes)+1;
        if (k == (int)hes.size()) {
            cout << 0 << endl;
            continue;
        }
        for (int j = k; j < (int)hes.size() && hes[j] < hb; ++j) {
            int a = Bin(ws, m[hes[j]])+1;
            if (a == (int)m[hes[j]].size())
                continue;
            int b = a;
            for (int z = n+1; z >= 1; z/=2)
                while (z+b < (int)m[hes[j]].size() && m[hes[j]][z+b] < wb)
                    b+=z;
            if (m[hes[j]][b] >= wb)
                continue;
            int dif = (a == 0 ? 0 : sums[hes[j]][a-1]);
            s += (sums[hes[j]][b]-dif);
        }
        cout << s << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
