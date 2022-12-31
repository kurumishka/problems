#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    int m0 = 0, m1 = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > a[m0])
            m0 = i;
    }
    m1 = m0 ? 0 : 1;
    for (int i = 0; i < n; ++i)
        if (i != m0 && a[i] > a[m1])
            m1 = i;
    cout << a[m1]+a[m0] << endl;
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
