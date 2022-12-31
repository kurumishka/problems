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
    cin >> n;
    V(int) v(n), dp(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0)
            dp[i] = (v[i] == 0) ? 1 : -1;
        else
            dp[i] = (v[i] == 0) ? dp[i-1]+1 : dp[i-1]-1;
    }
    
    pair<int,int> seg;
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            int d = (i == 0) ? 0 : dp[i-1];
            if (dp[j]-d > ans) {
                ans = dp[j]-d;
                seg = {i,j};
            }
        }

    for (int i = seg.F; i <= seg.S; i++)
        v[i] = 1-v[i];
    ans = 0;
    for (int i=0; i < n; i++)
        ans+=v[i];
    cout << ans << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
