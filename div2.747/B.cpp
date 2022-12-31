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
    int k;
    cin >> k;
    int res = 1;
    if (k == 1) cout << 6 << endl;
    else {
        int d = 4;
        for (int i = 1; i <= k-1; i++) {
            d = ((d%ANS)*(d%ANS))%ANS;
            res = ((res%ANS)*(d%ANS))%ANS;
        }
        cout << (res*6)%ANS << endl;
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
