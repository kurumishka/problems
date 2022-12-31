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
    iota(all(a), 1);
    reverse(all(a));
    for (auto& x : a)
        cout << x << " ";
    cout << endl;
    for (int i = n-1; i > 0; --i) {
        swap(a[i], a[i-1]);
        for (auto& x : a)
            cout << x << " ";
        cout << endl;
    }
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
