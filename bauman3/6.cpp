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

map<char,int> m;
map<int,char> ic;
void gen() {
    string s = "ABCDEFGH";
    for(int i =1; i <=8; ++i) {
        m[s[i-1]]=i;
        ic[i]=s[i-1];
    }
    s = "12345678";
    for(int i =1; i<=8;++i) {
        m[s[i-1]]=i;
    }
}

V<pair<int,int>> mvs, ans;
set<pair<int,int>> pawn, got;
void check(pair<int,int> pos, int c = 0) {

    V<pair<int,int>> poses = {
        {pos.first+2, pos.second-1},
        {pos.first+2, pos.second+1},
        {pos.first-2, pos.second-1},
        {pos.first-2, pos.second+1},
        {pos.first+1, pos.second-2},
        {pos.first-1, pos.second-2},
        {pos.first+1, pos.second+2},
        {pos.first-1, pos.second+2}
    };
    bool ok = false; 
    for(auto &x : poses)
        if (pawn.count(x) && !got.count(x))
            ok = true;

    if (!ok) {
        if (mvs.size() > ans.size())
            ans = mvs;
        return;
    }

    for(auto &x : poses) {
        if (!got.count(x) && pawn.count(x)) {
            got.insert(x);
            mvs.push_back(x);
            check(x, c+1);
            got.erase(x);
            mvs.pop_back();
        }
    }

}

void solve() {
    int n;
    cin >> n;
    string start;
    cin >> start;
    pair<int,int> st = {m[start[0]], m[start[1]]};
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        pawn.insert({m[s[0]], m[s[1]]});
    }
    check(st);
    cout << ans.size() << endl;
    for(auto &x : ans)
        cout << ic[x.first] << x.second << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    gen();
    solve();
    return 0;
}
