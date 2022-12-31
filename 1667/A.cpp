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
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    int d = 1e18;
    for (int i = 0; i < n; ++i) {
        int ld = 0;
        V<int> b (n, 0);
        for (int j = i-1; j >= 0; --j)
            if (b[j] >= b[j+1]) {
                int dif = b[j]-b[j+1];
                int m = dif/a[j] + 1;
                b[j]-=m*a[j];
                ld+=m;
            }
        for (int j = i+1; j < n; ++j)
            if (b[j] <= b[j-1]) {
                int dif = b[j-1]-b[j];
                int m = dif/a[j] + 1;
                b[j]+=m*a[j];
                ld+=m;
            }
        d = min(d,ld);
    }
    cout << d << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
