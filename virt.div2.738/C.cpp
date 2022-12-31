#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    int ind = -1;
    for (int i = n-1; i >= 0; --i)
        if (a[i] == 0) {
            ind = i;
            break;
        }
    if (ind == -1) {
        cout << n+1 << " ";
        for (int i = 0; i < n; ++i)
            cout << i+1 << " ";
        cout << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        cout << i+1 << " ";
        if (i == ind) cout << n+1 << " ";
    }
    cout << endl;
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
