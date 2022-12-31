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
    string s;
    cin >> s;
    pair<int,int> m = {-1, -1}; // first - i, second - val
    for (int i = 0; i < s.size()-1; ++i) {
        int d = s[i]-'0'+s[i+1]-'0';
        if (d > 9) {
            m.first = i;
            m.second = d;
        }
    }
    if (m.second == -1) {
        cout << s[0]-'0'+s[1]-'0';
        for (int i = 2; i < s.size(); ++i)
            cout << s[i];
    }
    else {
        for (int i = 0; i < m.first; ++i)
            cout << s[i];
        cout << m.second;
        for (int i = m.first+2; i < s.size(); ++i)
            cout << s[i];
    }
    cout << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
