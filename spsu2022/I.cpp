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

V<char> v;
V<int> res;
int n, ans;

int reduce() {
    int a = 1e9;
    V<int> arr;
    auto cpy = res;
    auto it = cpy.begin();
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == '+')
            arr.pb(*(it++));
        else {
            it++;
            *it = *it + *(it-1);
        }
    }
    arr.pb(*it);
    for (auto& x : arr)
        a = min(x,a);
    return a;
}

void gen(int id = 0) {
    if (id == n-1) {
        ans = max(ans, reduce());
        return;
    }
    V<char> h = {'+', '*'};
    for (int i = 0; i < 2; ++i) {
        v[id] = h[i];
        gen(id+1);
    }
}

void solve() {
    cin >> n;
    ans = -1e9;
    res = V<int>(n);
    v = V<char>(n-1);
    cin >> res;
    gen();
    cout << ans << endl;

    
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
