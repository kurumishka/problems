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

inline int count(int n) {
    int i = 0;
    while (n%32768) {
        n*=2;
        ++i;
    }
    return i;
}

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    for (int i = 0; i < n; ++i) {
        int d = count(a[i]);
        for (int j = 1; j <= 15; ++j)
            d = min(d, count(a[i]+j)+j);
        cout << d << " ";
    }
    cout << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
