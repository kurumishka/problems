#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

set<string> vis, wds;
V(string) v;
set<pair<int,int>> c;

void search(int i, int j, string word, int sz) {
    if (vis.count(word)) return;
    string s = string(sz, ' ');
    for (int i = 0; i < sz; i++)
        s[i] = word[i];
    if (wds.count(s)) {
        vis.insert(s);
    }
    if (sz == word.size()) {
        vis.insert(word);
        return;
    }
    if (i-1 >= 0 && v[i-1][j] == word[sz] && !c.count({i-1,j}) && !vis.count(word)) {
        c.insert({i-1,j});
        search(i-1,j,word,sz+1);
        c.erase({i-1,j});
    }
    if (j-1 >= 0 && v[i][j-1] == word[sz] && !c.count({i,j-1}) && !vis.count(word)) {
        c.insert({i,j-1});
        search(i,j-1,word,sz+1);
        c.erase({i,j-1});
    }
    if (i+1 < v.size() && v[i+1][j]==word[sz] && !c.count({i+1,j})&& !vis.count(word)) {
        c.insert({i+1,j});
        search(i+1,j,word,sz+1);
        c.erase({i+1,j});
    }
    if (j+1 < v[0].size() && v[i][j+1]==word[sz] && !c.count({i,j+1}) && !vis.count(word)) {
        c.insert({i,j+1});
        search(i,j+1,word,sz+1);
        c.erase({i,j+1});
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    v = V(string)(n);
    for (auto &x : v)
        cin >> x;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string tmp;
        cin >> tmp;
        wds.insert(tmp);
    }
    for (auto &x : wds) {
        if (vis.count(x)) continue;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                if (v[i][j] != x[0]) continue;
                c.insert({i,j});
                search(i,j,x,1);
                c.erase({i,j});
                if (vis.count(x)) goto f;
            }
        f: ;
    }
    cout << vis.size() << endl;
    for (auto &x : vis) cout << x << endl;
        
}
signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
