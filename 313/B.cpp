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
    string s;
    cin >> s;
    
    int k = s.size();
    int dp[k];
    for (int i = 0; i < k; i++) {
        if (i && s[i] == s[i-1]) dp[i]=dp[i-1]+1;
        else if (!i) dp[i]=0;
        else dp[i] = dp[i-1];
    }


    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int j,k;
        cin >> j >> k;
        cout << dp[k-1]-dp[j-1] << endl; 
    }

}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
