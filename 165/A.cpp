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
        int x, y;
        cin >> x >> y;
        v.pb({x,y});
    }
    int ans = 0;
    map<int, set<char>> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            if (v[i].F > v[j].F && v[i].S == v[j].S) m[i].insert('r');
            else if (v[i].F < v[j].F && v[i].S == v[j].S) m[i].insert('l'); 
            else if (v[i].F == v[j].F && v[i].S > v[j].S) m[i].insert('d');
            else if (v[i].F == v[j].F && v[i].S < v[j].S) m[i].insert('h');
        }
    }
    for (auto &it : m)
        if (it.S.size() >= 4) ans++;
    cout << ans << endl;
    return 0;
}
