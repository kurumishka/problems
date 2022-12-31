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
    int n,m; cin >> n >> m;
    int ans = n, t = 0;
    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        int rest = (tmp/m);
        rest += (tmp%m) ? 1 : 0;
        if (tmp-m > 0 && rest>= t) {
            ans = i;
            t = rest;
        }
    }
    cout << ans << endl;
    return 0;
}
