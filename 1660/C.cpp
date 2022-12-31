#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


void solve() {
    string s, rem;
    cin >> s;
    int n = s.size();
    set<char> ch;
    int d = 0;
    for (int i = 0; i < n-1; ++i) {
        if (ch.count(s[i])) {
            --d;
            ch.clear();
            continue;
        }
        else if (s[i] != s[i+1]) {
            ch.insert(s[i]);
            ++d;
            continue;
        }
        else
            ch.clear();
        ++i;
        
    }
    if ((n-d)%2) {
        ++d;
        if (ch.count(s.back()))
            d-=2;
    }
    cout << d << endl;

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
