#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;
#define int long long
const int mod = 998244353;
void solve() {
    int n;
    cin >> n;
    if (n&1) {
        cout << 0 << endl;
        return;
    }
    int p = 1;
    for (int i = 1; i <= n/2; ++i)
        p = (p*i)%mod;
    cout << (p*p)%mod << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
