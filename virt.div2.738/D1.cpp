#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

struct U {
    int n, *link, *size;
    U(int _n) { n=_n;
    link = (int*)malloc(sizeof(int)*(n+1));
    size = (int*)malloc(sizeof(int)*(n+1));
    for (int i = 1; i <= n; ++i){link[i]=i; size[i]=1;} }
    int find(int x){
        while(x != link[x]) x = link[x];
        return x;
    }
    bool same(int a, int b) { return find(a) == find(b);}
    void unite(int a, int b) {
        a = find(a), b = find(b);
        if (a == b) return;
        if (size[a] < size[b]) swap(a,b);
        size[a]+=size[b];
        link[b] = a;
    }
};

void solve() {
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    U s1 (n), s2 (n);
    for (int i = 0; i < m1; ++i) {
        int a, b;
        cin >> a >> b;
        s1.unite(a,b);
    }
    for (int i = 0; i < m2; ++i) {
        int a, b;
        cin >> a >> b;
        s2.unite(a,b);
    }
    V<pair<int,int>> ans;
    for (int i = 1; i <= n; ++i)
        for (int j = i+1; j <= n; ++j)
            if (!s1.same(i,j) && !s2.same(i,j)) {
                s1.unite(i,j);
                s2.unite(i,j);
                ans.emplace_back(i,j);
            }
    cout << ans.size() << endl;
    for (auto& [l, r] : ans)
        cout << l << " " << r << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
