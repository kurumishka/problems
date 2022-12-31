#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define F first
#define S second

void solve() {
    int n, m;
    cin >> n >> m;
    V(string) v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    pair<int,int> s = {-1,-1};
    int z = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 'S')
                s = {i,j};
            else if (v[i][j] == '*') z++;
        }
    z++;
    string ans = string(z, ' ');
    set<pair<int,int>> vis;
    for (int i = 0; i < z-1; i++) {
        if (s.first-1 >= 0 && !vis.count({s.F-1, s.S}) && v[s.first-1][s.second] == '*') {
            ans[i] = 'U';
            s.first--;
            vis.insert({s.F,s.S});
        }
        else if (s.first+1 < n && !vis.count({s.F+1, s.S}) && v[s.first+1][s.second]=='*') {
            ans[i] = 'D';
            s.first++;
            vis.insert({s.F, s.S});
        }
        else if (s.second-1 >= 0 && !vis.count({s.F, s.S-1}) && v[s.first][s.second-1] == '*') {
            ans[i]='L';
            s.second--;
            vis.insert({s.F,s.S});
        }
        else if (s.second+1 < m && !vis.count({s.F,s.S+1})&& v[s.F][s.S+1] == '*') {
            ans[i] = 'R';
            s.S++;
            vis.insert({s.F,s.S});
        }
    }

    if (s.F-1 >= 0 && !vis.count({s.F-1, s.S}) && v[s.F-1][s.S] == 'S')
        ans.back() = 'U';
    else if (s.F+1 < n && !vis.count({s.F+1, s.S}) && v[s.F+1][s.S] == 'S')
        ans.back() = 'D';
    else if (s.S-1 >= 0 && !vis.count({s.F, s.S-1}) && v[s.F][s.S-1] == 'S')
        ans.back() = 'L';
    else
        ans.back() = 'R';

    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
