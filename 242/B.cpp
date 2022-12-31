#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    ll l = 1000000001, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].F >> v[i].S;
        if (v[i].F < l) l = v[i].F;
        if (v[i].S > r) r =v[i].S;
    }
    ll ans = -1;
    for (int i = 0; i< n; i++) {
        if (v[i].F == l && v[i].S == r) {
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
