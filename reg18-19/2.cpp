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

#define int long long
void solve() {
    int k;
    cin >> k;
    int start = 0;
    while(k + start*start < 0) start++;
    for (int i = start; i < 1e7; ++i) {
        int cur = k+i*i;
        double sq = sqrt(cur);
        if (sq-sqrt(((int)sq)*((int)sq)) < 1e-7) {
            cout << (int)sq << endl;
            goto end;
        }
    }
    cout << "none" << endl;
    end:;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
