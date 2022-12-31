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
    int n;
    ll m;
    cin >> n >> m;
    string ss;
    cin >> ss;
    for (ll i = 0; i < m; i++) {
        string s = ss;
        for (int j = 0; j < n; j++) {
            if (s[j] == '0' && j != 0 && j+1 != n) ss[j] = ((s[j+1] == '1' && s[j-1] == '0') || (s[j+1] == '0' && s[j-1] == '1')) ? '1' : '0';
            else if (s[j] == '0' && j == 0 && j+1 != n) ss[j] = (s[j+1] == '1') ? '1' : '0';
            else if (s[j] == '0' && j+1 == n && j != 0) ss[j] = (s[j-1] == '1') ? '1' : '0';
        }
        if (s == ss) break;
    }
    cout << ss << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    times
    {
    solve();
    }
    return 0;
}
