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
    int k = 0;
    int lk = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int h,m;
        cin >> h >> m;
        v.pb({h,m});
        if (i == 0) {
            k = 1;
            lk = 1;
        } else {
            if (v[i-1].F == h && v[i-1].S == m) {
                lk++;
            } else {
                lk = 1;
            }
            if (lk > k) k = lk;
        }
    }
    cout << k << endl;
    return 0;
}
