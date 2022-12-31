#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    while (c >= 2 && b) {
        b--;
        c-=2;
        ans+=3;
    }
    while (b >= 2 && a) {
        b-=2;
        a--;
        ans+=3;
    }
    cout << ans << endl;
    
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
