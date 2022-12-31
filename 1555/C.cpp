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
    int m;
    cin >> m;
    int sum[2][m];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < m; j++)
            cin >> sum[i][j];
    
    ll f = 0, s = 0;
    ll ans = ANS;
    for (int i = 0; i < m; i++) f+=sum[0][i];
    for (int i = 0; i < m; i++) {
        f -= sum[0][i];
        ans = min(ans, max(f,s));
        s += sum[1][i];
    }
    cout << ans << endl;
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
