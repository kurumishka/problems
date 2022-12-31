#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long


void solve() {
    int n;
    cin >> n;
    V<int> a(n), pr(n);
    set<int> sums;
    map<int, int> ind;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        pr[i] = (i == 0) ? a[i] : pr[i-1] + a[i];
        sums.insert(pr[i]);
        ind[pr[i]] = i;
    }
    int d = 0, sum = 0;
    for (int i = n-1; i >= 0; --i) {
        sum+=a[i];
        sums.erase(pr[i]);
        if (sums.count(sum))
            d = max(d, n-i+ind[sum]+1);
    }
    cout << d << endl;
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
