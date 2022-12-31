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
    vector<int> v;
    int mi = 0, ma = 0;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.pb(tmp);
        if (tmp == -1) mi++;
        else ma++;
    }
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        int range = r-l+1;
        if (range%2)
            cout << 0 << endl;
        else if (range/2 > mi || range/2 > ma)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
