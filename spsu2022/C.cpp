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

int d;
V<int> sz, cord;
int ans;

bool check(V<int>& a) {
    int r = -1;
    for (int i = 0; i < d; ++i) {
        int f = abs(cord[i]-d[i]);
        if (f != 0 && r == -1)
            r = f;
        if (r != -1 && f != r)
            return false;
    }
    return (r != -1);
}

void gen(V<int>& cords) {
    for (int i = 0; i < d; ++i)
        if (cords[i] == sz[i] && i+1 == d) {
        
        }
}

void solve() {
    cin >> d;
    cin >> sz;
    cin >> cord;

}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
