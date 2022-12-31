#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define int ll


void solve() {
    int ans = 0;
    int n;
    cin >> n;
    if (n%2 == 0) {
        cout << n/2 << endl;
        return;
    }
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n%i == 0) {
            int res = n-i;
            cout << res/2+1 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
