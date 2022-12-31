#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
template<typename T>
using V = vector<T>;
#define endl "\n"
#define pb push_back

#define int long long
map<int,int> m;
int n;

void check(int f, int d = 0) {
    if (m.count(f)) {
        --m[f];
        if (m[f] == 0) m.erase(f);
        return;
    }
    if (d == n) return;
    int l = f/2;
    if (l >= 1) {check(l, d+1); if(f%2)check(l+1, d+1);}
}

void solve() {
    cin >> n;
    m.clear();
    V<int> a(n);
    int sum = 0;
    for (auto& x : a) {
        cin >> x;
        ++m[x];
        sum+=x;
    }
    check(sum);
    cout << (m.size() ? "no" : "yes") << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
