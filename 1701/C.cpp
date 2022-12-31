#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    map<int,int> cnt;
    for (int i = 1; i <= n; ++i)
        cnt[i]=0;
    V<int> a(m);
    for (auto& x : a) {
        cin >> x;
        ++cnt[x];
    }
    auto f = [&](int t){
        int sum = 0, nsum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += (t-min(t,cnt[i]))/2;
            nsum += cnt[i]-min(t, cnt[i]);
        }
        return nsum <= sum;
    };
    int k = 0;
    for (int z = 2*m; z >= 1; z/=2)
        while (!f(z+k)) k+=z;
    cout << k+1 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
