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

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    cin >> a;
    string s;
    cin >> s;
    int c = 0;
    V<pair<int,int>> ind_val_ed, ind_val_zero;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            c++;
            ind_val_zero.pb({i,a[i]});  
       }
        else 
            ind_val_ed.pb({i, a[i]});
    }
    V<pair<int,int>> ans;
    sort(all(ind_val_ed), [](pair<int,int>& a, pair<int,int>& b){return a.second < b.second;});
    sort(all(ind_val_zero), [](pair<int,int>& a, pair<int,int>& b){return a.second < b.second;});
    for (int i = 0; i < ind_val_ed.size(); ++i) {
        ans.pb({ind_val_ed[i].first, c+1+i});
    }
    for (int i = 0; i < ind_val_zero.size(); ++i)
        ans.pb({ind_val_zero[i].first, i+1});
    sort(all(ans));
    for (auto& x : ans) cout << x.second << " ";
    cout << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    solve();
    return 0;
}
