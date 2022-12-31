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
    int n, k;
    cin >> n >> k;
    V(int) v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int stop = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] <= k) {
            ans++;
            stop++;
        }
        else break;
    }
    for (int i = v.size()-1; i > stop; i--) {
        if (v[i] <= k) ans++;
        else break;
    }
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
