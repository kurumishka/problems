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
    int n, k;
    cin >> n >> k;
    V(int) v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    V(int) dp(n);
    for (int i = 0; i < n; i++) {
        if (i == 0) dp[i] = v[i];
        else dp[i] = v[i] + dp[i-1];
    }

    ll ans = 10000000000;
    int j = 0;
    for (int i = 0; i <= n-k; i++) {
        int diff = (i == 0) ? 0 : dp[i-1];
        if (dp[k+i-1]-diff < ans) {
            ans = dp[k+i-1]-diff;
            j = i+1;
        }
    }
    cout << j << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
