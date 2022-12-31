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
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define US(T) unordered_set<T>

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int prev = 0, cur = 1;
    set<int> d;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1])
            cur++;
        else {
            prev = cur;
            cur = 1;
        }
        if (cur >= 3 || (prev == 2 && cur == 2)) {
            d.insert(i);
            cur--;
        }
    }
    string ans = string();
    for (int i = 0; i < n; i++) {
        if (d.count(i)) continue;
        else ans.pb(s[i]);
    }
    cout << ans << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
