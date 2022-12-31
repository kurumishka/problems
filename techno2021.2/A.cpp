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
    int n,m,r,c;
    cin >> n >> m >> r >> c;
    int d = 0;
    d = max(d, abs(m-c)+abs(n-r));
    d = max(d, abs(1-c)+abs(1-r));
    d = max(d, abs(m-c)+abs(1-r));
    d = max(d, abs(1-c)+abs(n-r));
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
