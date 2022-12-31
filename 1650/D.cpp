#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


inline void left_shift(V<int>& v, int n, int times){
    V<int> a (n, 0);
    for (int i = 0; i < n; ++i)
        a[i] = v[(i+times)%n];
    for (int i = 0; i < n; ++i)
        v[i] = a[i];
}

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    V<int> v(n);
    v[0]=0;
    for (int i = n; i > 0; --i) {
        int d = -1;
        for (int j = i; j >= 0; --j)
            if (a[j-1] == i) {
                d = j%i;
                break;
            }
        if (d == -1) {
            cout << -1 << endl;
            return;
        }
        v[i-1] = d;
        left_shift(a, i, d);
    }
    for (auto& x : v)
        cout << x << " ";
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
