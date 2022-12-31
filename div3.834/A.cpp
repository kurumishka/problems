#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    string s;
    cin >> s;
    map<char, char> pred = {
        {'s', 'e'},
        {'e', 'Y'},
        {'Y', 's'}
    };
    for (int i = 0; i < s.size(); ++i){
        if(!pred.count(s[i])){cout<<"NO" <<endl;return;}
    }
    for (int i = 1; i < s.size(); ++i) {
        if (pred[s[i]]!=s[i-1]){cout<<"NO"<<endl;return;}
    }
    cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
