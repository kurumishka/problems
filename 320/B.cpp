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
typedef pair<ll, ll> pll;
void to_nodes(vector<pll>& nodes, map<pll, vector<pll>>& pathes)
{
    for (int i = 0; i < nodes.size(); i++) {
        pll cur = nodes[i];
        if (!pathes.count(cur)) pathes[cur] = {};
        for (int j = 0; j < nodes.size(); j++) {
            if (i==j)continue;
            pll comp = nodes[j];
            if ( (cur.F > comp.F && cur.F < comp.S) || (cur.S > comp.F && cur.S < comp.S) )
                pathes[cur].pb(comp);
        }
    }
}
bool move_to(map<pll, vector<pll>>& pathes, set<pll>& vis, pll from, pll need) {
    vector<pll> ways = pathes[from];
    vis.insert(from);
    for (int i = 0; i < ways.size(); i++) {
        bool can = false;
        if (vis.count(ways[i])) continue;
        if (ways[i] == need)
            return true;
        else
            can = move_to(pathes, vis, ways[i], need);
        vis.insert(ways[i]);
        if (can)
            return true;
    }
    return false;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pll> nodes;
    map<int, pll> adds;
    map<pll, vector<pll>> pathes;
    int ct = 1;
    for (int i = 0; i < n; i++) {
        ll s, a, b;
        cin >> s >> a >> b;
        if (s == 1) {
            adds[ct++] = {a,b};
            nodes.pb({a,b});
            to_nodes(nodes, pathes);
        }
        else {
            set<pll> lvis;
            if (move_to(pathes, lvis, adds[a], adds[b]))
                cout << "YES" << endl;
            else
                cout << "NO" <<endl;
        }
    }
    /*for (auto &x : pathes) {
        cout << "(" << x.F.F << "," << x.F.S << ") : ";
        for (auto &y : x.S) cout << " (" << y.F << "," << y.S << ") ";
        cout << endl;
    }*/
    return 0;
}
