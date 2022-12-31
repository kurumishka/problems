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

map<int,int> m;
inline void gen() {
    m[0] = 3;
    m[3] = 1029;
    m[6] = 352947;
    m[2] = 147;
    m[1] = 21;
    m[4] = 7203;
    m[5] = 50421;
    m[7] = 2470629;
    m[8] = 17294403;
    m[9] = 121060821;
    m[10] = 847425747;
}


void solve() {
    int n;
    cin >> n;
    cout << m[n] << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    gen();
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
