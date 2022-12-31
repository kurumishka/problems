#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
#define T_MAX(a,b,c) max(max(a,b),c)
#define SUPER_DUPER_FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define REV [](const int &a, const int &b){return a > b;}
#define V(T) vector<T>
#define US(T) unordered_set<T>

void solve() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++) {
        if (m.count(s[i])) m[s[i]]++;
        else m[s[i]] = 1;
    }
    string res = string();
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second%k) {
            cout << -1 << endl;
            return;
        }
        for (int i = 0; i < it->second/k; i++) {
            res.pb(it->first);
        }
    }
    string temp = res;
    for (int i = 0; i < k-1; i++) {
        res += temp;
    }
    if (res.size() != s.size())
        cout << -1 << endl;
    else
        cout << res << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
