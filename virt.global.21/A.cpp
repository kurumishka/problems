#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n, z;
    cin >> n >> z;
    V<int> a(n);
    int m = -1;
    for (auto& x : a) {
        cin >> x;
        m = max(m, x|z);
    }
    cout << m << endl;
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
