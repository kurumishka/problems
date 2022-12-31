#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS (1e9+7)

// --------- vector operators ----------------
template<class T>
inline ostream& operator<<(ostream& os, V<T>& vec) {
    for(auto& x : vec) os << x << " ";
    return os; }

template<class T>
inline istream& operator>>(istream& is, V<T>& vec) {
    for(auto &x : vec) is >> x;
    return is; }
// ------------------------------------------

set<pair<int,int>> vis;
int ans, cur, n, m;
pair<int,int> st, en;
V<V<char>> a;

void check(int i, int j, int x, int y) {
    if (!vis.count({i, j+1}) && j+1 <= y && a[i][j+1] =='L') {
        vis.insert({i, j+1});
        cur++;
        check(i,j+1,x,y);
    }
    if (!vis.count({i+1, j+1}) && j+1 <= y && i+1 <= x && a[i+1][j+1] == 'L') {
        vis.insert({i+1,j+1});
        cur++;
        check(i+1,j+1,x,y);
    }
    if (!vis.count({i+1, j}) && i+1 <= x && a[i+1][j] == 'L') {
        vis.insert({i+1,j});
        cur++;
        check(i+1,j,x,y);
    }
}

void solve() {
    cin >> n >> m;
    a = V<V<char>> (n,V<char>(m));
    for(auto &x : a)
        cin >> x;
    for (int i = 1; i < n; ++i) 
        for(int j = 1; j < m; ++j) 
            for (int x = i; x < n; ++x) 
                for (int y = j; y < m; ++y) {
                    check(i,j,x,y);
                    if (cur > ans) {
                        ans = cur;
                        st = {i,x};
                        en = {j,y};
                    }
                    vis.clear();
                    cur=0;
                }
    cout << st.first+1 << " " << st.second+1 << " " << en.first+1 << " " << en.second+1 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
