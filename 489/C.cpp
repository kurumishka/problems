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

inline string make_len(int len) {
    string temp = string(len, '0');
    temp[0] = '1';
    return temp;
}

inline void inc(string& s) {
    auto r = s.rbegin();
    while(r != s.rend() && *r == '9') r++;
    if (r != s.rend()) (*r)++;
}

inline int get_sum(string& s) {
    int res = 0;
    for (auto& c : s)
        res+=(c-'0');
    return res;
}

inline string max_result(int len, int s) {
    string temp = string(len, '0');
    auto l = temp.begin();
    while (s > 0) {
        if (s >= 9) {
            *l = '9';
            s-=9;
        }
        else {
            *l = s+'0';
            s=0;
        }
        ++l;
    }
    return temp;
}

void solve() {
    int m, s;
    cin >> m >> s;
    if ((s == 0 && m != 1) || m*9 < s) {
        cout << -1 << " " << -1 << endl;
        return;
    }
    else if (s == 0 && m == 1) {
        cout << "0 0" << endl;
        return;
    }
    string temp = make_len(m);
    while(get_sum(temp) != s)
        inc(temp);
    cout << temp << " ";
    cout << max_result(m,s) << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    solve();
    return 0;
}
