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
    vector<vector<int>> ans;
    times
    {
        int n; cin >> n;
        vector<int> ev, od;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            if (tmp%2) od.pb(tmp);
            else ev.pb(tmp);
        }
        od.insert(od.end(), all(ev));
        ans.pb(od);
    }
    for (auto &x : ans) {
        for (auto &y : x)
            cout << y << " ";
        cout << endl;
    }
    return 0;
}
