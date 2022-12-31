#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define fr(na,ze,va) for (auto na = ze; na < va; na++)
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<ll> v, vsorted;
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        v.pb(temp);
        vsorted.pb(temp);
    }
    sort(all(vsorted));
    ll sdp[n], dp[n];
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            dp[i] = v[i];
            sdp[i] = vsorted[i];
        }
        else {
            dp[i] = dp[i-1]+v[i];
            sdp[i] = sdp[i-1]+vsorted[i];
        }
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            if (l == 1)
                cout << dp[r-1] << endl;
            else
                cout << dp[r-1]-dp[l-2] << endl;
        }
        else {
            if (l == 1)
                cout << sdp[r-1] << endl;
            else
                cout << sdp[r-1]-sdp[l-2] << endl;
        }
    }
    return 0;
}
