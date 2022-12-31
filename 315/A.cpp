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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        v.pb({a,b});
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int m = v[i].F;
        bool f = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            else {
                if (v[j].S == m) { f = true; break; }
            }
        }
        if (!f) ans++;
    }
    cout << ans << endl;
    return 0;
}
