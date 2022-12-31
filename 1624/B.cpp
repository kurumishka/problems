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

#define yes cout << "YES" << endl
#define int long long

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int ad = b-(c-b), bd = a+(c-a)/2, cd = b+(b-a);
    if ((ad+(int)1e4*a)%a == 0 && ad/a > 0) yes;
    else if ((c-a)%2 == 0 && (bd + (int)1e4*b)%b == 0 && bd/b > 0) yes;
    else if ((cd + (int)1e4*c)%c == 0 && cd/c > 0) yes;
    else cout << "NO" << endl;
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
