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
    set<int> a;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        a.insert(b);
    }
    for (int k = 1; k <= n; ++k)
        cout << (k <= a.size() ? a.size() : k) << " ";
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
