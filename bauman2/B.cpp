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
    int a, b;
    cin >> a >> b;
    V(int) a8, b8;
    while (a > 0) {
        a8.pb(a%8);
        a/=8;
    }
    while(b > 0) {
        b8.pb(b%8);
        b/=8;
    }
    int b8_ = 0, a8_ = 0;
    for (int i = a8.size()-1; i >= 0; i--) {
        a8_*=10;
        a8_+=a8[i];
    }
    for (int i = b8.size()-1; i >= 0; i--) {
        b8_*=10;
        b8_+=b8[i];
    }
    a = a8_; b = b8_;

    set<int> res;
    int x = a%b;
    res.insert(x);
    if (x == 0) {
        cout << 0 << endl;
        return;
    }
    for(int i = 1; i < 1e5; i++) {
        x = (x*8)%b;
        if (x == 0) {
            cout << i << endl;
            return;
        }
        if (res.count(x)) {
            cout << "NO" << endl;
            return;
        }
        res.insert(x);
    }
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
