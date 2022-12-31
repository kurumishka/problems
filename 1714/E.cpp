#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    bool nz = false, z = false, eq = true;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i]%10 == 5)
            a[i] += 5;
        if (a[i]%10) nz = true;
        else z = true;
        if (i) eq = eq && (a[i] == a[i-1]);
    }
    if ((z && nz) || (z && !eq)) {
        cout << "no" << endl;
        return;
    }
    if (eq && z){
        cout << "yes" << endl;
        return;
    }
    int d[2] = {0};
    for (int i = 0; i < n; ++i) {
        while (a[i]%10 != 6 || a[i] < 100){
            a[i]+=(a[i]%10);
        }
        int s = (a[i]%100)/10;
        d[s%2]++;
    }
    if (d[0] == n || d[1] == n) {
        cout << "yes" << endl;
    } else cout << "no" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
