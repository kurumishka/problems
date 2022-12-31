#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n, m;
    cin >> n >> m;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    string s (m, 'B');
    for (int i = 0; i < n; ++i) {
        int l = a[i]-1;
        int r = (m+1-a[i])-1;
        if (s[min(l,r)] == 'A')
            s[max(l,r)] = 'A';
        else
            s[min(l,r)] = 'A';
    }
    cout << s << endl;
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
