#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define int long long

template<typename T> 
using V = std::vector<T>;
using namespace std;

inline int ask(int l, int r){
    cout << "? " << l << " " << r << endl;
    int res; cin >> res;
    return res;
}

void solve() {
    int n;
    cin >> n;
    int k = ask(1, n);
    int l = ask(1, k);
    auto toleft = [&](){
        int r = k;
        for (int z = n; z >= 1; z/=2)
            while (r-z > 0 && ask(r-z, k) != k) r-=z;
        cout << "! " << r-1 << endl;
    };
    auto toright = [&](){
        int r = k;
        for (int z = n; z >= 1; z/=2)
            while (r+z <= n && ask(k, r+z) != k) r+=z;
        cout << "! " << r+1 << endl;
    };  
    if (l == k)
        toleft();
    else 
        toright();
}

signed main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
