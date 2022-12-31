#pragma GCC optimize("O2")

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
    int l = -1;
    for (int i = 0; i < n-1; ++i) 
        if (a[i] == a[i+1]) {
            l=i;
            break;
        }
    int r = -1;
    for (int i = n-1; i > 0; --i)
        if (a[i] == a[i-1]) {
            r=i;
            break;
        }
    int d;
    if (l == -1 || r-l == 1)
        d = 0;
    else if (r-l+1 == 3)
        d = 1;
    else
        d = r-l+1-3;
    cout << d << endl;


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
