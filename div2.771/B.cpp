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
    for (auto& x : a)
        cin >> x;
    int max_ev = 0, max_od = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i]%2 && a[i] > max_od)
            max_od = a[i];
        else if (a[i]%2 == 0 && a[i] > max_ev)
            max_ev = a[i];
        if ((a[i]<max_ev && (a[i]+max_ev)%2 == 0) || (a[i]<max_od && (a[i]+max_od)%2==0)) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

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
