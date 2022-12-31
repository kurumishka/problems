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
    int n;
    cin >> n;
    V(int) v(n);
    ll sum = 0;
    for (auto &x : v) {
        cin >> x;
        sum+=x;
    }
    if (sum%2==0) {
        f:
        cout << n << endl;
        for (int i = 0; i < n; i++) cout << i+1 << " ";
        cout << endl;
        return;
    }
    else {
        for (int i = 2; i < sum/2; i++) {
            if (sum%i == 0) {goto f;}
        }
        bool ok = false;
        cout << n-1 << endl;
        for (int i = 0; i < n; i++) {
            if (v[i]%2 == 0) {
                cout << i+1 << " ";
                continue;
            }
            if (!ok && v[i]%2) {
                ok = true;
                continue;
            } 
            if (ok) cout << i+1 << " ";
        }
        cout << endl;
    }

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
