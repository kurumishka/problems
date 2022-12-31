#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

int dp[40001];

void gen() {
    memset(dp, 0, sizeof(dp));
    V<int> pal;
    auto Check = [](int n) {
        V<int> d;
        while (n) {
            d.pb(n%10);
            n/=10;
        }
        for (int i = 0; i < d.size()/2; ++i) {
            if (d[i] != d[d.size()-i-1]) return false;
        }
        return true;
    };
    for (int i = 1; i <= 40000; ++i) {
        auto res = Check(i);
        if (res) pal.pb(i);
    }
    dp[0] = 1;
    for (auto& c : pal)
        for (int i = 1; i <= 40000; ++i)
            if (i-c >= 0) {
                dp[i] += dp[i-c]; 
                dp[i]%=((int)1e9+7);
            }
}

void solve() {
    int n;
    cin >> n;
    cout << dp[n] << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    gen();
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
