#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

set<string> tr;

void precalc(){
    string s = "Timur";
    do {
        tr.insert(s);
    } while (next_permutation(all(s)));

    do {
        tr.insert(s);
    } while (prev_permutation(all(s)));
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (tr.count(s) ? "YES" : "NO") << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    precalc();
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
