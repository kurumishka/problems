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
    for (auto& x : a)
        cin >>x;
    V<int> ans(n+1, 0);
    map<int,int> even, odd;
    for (int i = 1; i <= n; ++i)
        even[i] = odd[i] = -1;
    map<int, int> ind;
    for (int i = 0; i < n; ++i) {
        int c = a[i];
        ind[i] = 1;

        int d = (i%2 == 1 ? even[c] : odd[c]);
        if (d != -1)
            ind[i] = ind[d]+1;
        if (i%2 == 0)
            even[c] = i;
        else
            odd[c] = i;
        ans[c] = max(ans[c], ind[i]);
    }
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << " ";
    

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
