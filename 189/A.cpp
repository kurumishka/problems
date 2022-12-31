#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define fr(na,ze,va) for (auto na = ze; na < va; na++)
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    ll dp[n+1];
    for (int i = 0; i <= n; i++) {
        dp[i] = 0;
    }
    vector<int> v = {a,b,c};
    sort(all(v));
   
    for (int i = v[0]; i <= n; i++) {
        if (i == v[0]) {
            dp[i] = 1;
        }
        else if (!(i%v[0])) {
            dp[i] = dp[i-v[0]]+1;
        }
    }

    for (int i = v[1]; i <= n; i++) {
        if (i == v[1]) {
            dp[i] = (dp[i] > 1) ? dp[i] : 1;
        }
        else if (i-v[1] >= 0) {
            dp[i] = (dp[i] > dp[i-v[1]]+1 || dp[i-v[1]] == 0) ? dp[i] : dp[i-v[1]]+1;
        }
    }

    for (int i = v[2]; i <= n; i++) {
        if (i == v[2]) {
            dp[i] = (dp[i] > 1) ? dp[i] : 1;
        }
        else if (i-v[2]>=0) {
            dp[i] = (dp[i] > dp[i-v[2]]+1 || dp[i-v[2]] == 0) ? dp[i] : dp[i-v[2]]+1;
        }
    }
    
   if (v[2] <= n)
        dp[n] = max(dp[n], max(dp[n-v[0]]+1, max(dp[n-v[1]]+1, dp[n-v[2]]+1)));
    else if (v[1] <= n)
        dp[n] = max(dp[n-v[0]]+1, max(dp[n], dp[n-v[1]]+1));
    else if (v[0] <= n)
        dp[n] = max(dp[n], dp[n-v[0]]+1);
   
    cout << dp[n] << endl;

    return 0;
}
