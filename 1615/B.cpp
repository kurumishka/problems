#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


V<map<int,int>> v;

void precount() {
    v = V<map<int,int>> (2*1e5+1);
    map<int,int> b;
    for (int i = 0; i <= 2*1e5; ++i){
        for (int j = 0; j < 32; ++j)
            if (i&(1 << j)) ++b[j];
        v[i] = b;
    }
}

void solve() {
    int l, r;
    cin >> l >> r;
    int m = 0;
    for (int i = 0; i < 32; ++i) {
        m = max(v[r][i]-v[l-1][i], m);
    }
    cout << r-l+1-m << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    precount();
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
