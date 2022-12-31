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
    ll a, b, c;
    cin >> a >> b >> c;
    cout << ((max(b,c)+1 > a) ? max(b,c)+1-a : 0) << " ";
    cout << ((max(a,c)+1 > b) ? max(a,c)+1-b : 0) << " ";
    cout << ((max(a,b)+1 > c) ? max(a,b)+1-c : 0) << endl;
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
