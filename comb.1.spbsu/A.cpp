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
    iota(all(a), 1);
    do {
        for (auto& x : a)
            cout << x << " ";
        cout << endl;
    } while (next_permutation(all(a)));
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef ONLINE_JUDGE
    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);
#endif

    solve();
    return 0;
}
