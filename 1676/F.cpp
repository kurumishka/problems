#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


void solve() {
    int n, k;
    cin >> n >> k;
    V<int> a(n), v(n);
    map<int,int> m;
    for (auto& x : a){
        cin >> x;
        ++m[x];
    }
    sort(all(a));
    int prev = -2;
    int r = -1, l = 0, lr = -1, ll = 0;
    for (int i = 0; i < n; i+=m[a[i]]) {
        if (prev+1 == a[i] && m[prev] >= k && m[a[i]] >= k) {lr=a[i];}
        else if (m[a[i]] >= k) {
            lr=a[i];
            ll=lr;
        }
        prev=a[i];
        if (lr-ll > r-l) {
            r=lr;
            l=ll;
        }
    }
    if (r==-1) cout << -1 << endl;
    else cout << l << " " << r << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
