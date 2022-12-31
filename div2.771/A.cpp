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
    int l = 0, r = 0, nd = 0;
    for (int i = 0; i < n; ++i) {
        if (nd==0 && a[i] != i+1) {
            l=i;
            nd = i+1;
        }
        if (a[i] == nd) {
            r=i;
            break;
        }
    }
    reverse(a.begin()+l, a.begin()+r+1);
    for (auto& x : a)
        cout << x << " ";
    cout << endl;
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
