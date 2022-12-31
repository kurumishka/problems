#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


void solve() {
    map<char, int> t;
    string s;
    cin >> s;
    for (auto& x : s)
        ++t[x];
    bool state = false;
    for (auto& x : s) {
        if (state) {
on:
            cout << x;
            continue;
        }
        if (!state && t[x] == 1) {
            state = true;
            goto on;
        }
        else
            --t[x];
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
