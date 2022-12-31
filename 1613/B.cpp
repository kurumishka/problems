#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int i = 1; i <= n/2; ++i)
        cout << a[i] << " " << a[0] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

