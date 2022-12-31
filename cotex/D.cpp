#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define int long long


void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    int k1 = l+((n-(l%n))%n), k2 = (r-1)-((r-1)%n);
    if (k1 > (r-1)) cout << 0 << endl;
    else if (k2 < k1) cout << 1 << endl;
    else cout << (k2-k1)/n + 1 << endl;
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
