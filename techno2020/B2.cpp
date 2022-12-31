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
    int n, k, d;
    cin >> n >> k >> d;
    V(int) a(n);
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i < d) m[a[i]]++;
    }
    int ans = m.size();
    for (int i = 0; i < n-d; i++) {
        m[a[i]]--;
        m[a[i+d]]++;
        if (m[a[i]] == 0) m.erase(a[i]);
        int s = m.size();
        ans = min(ans,s);
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
