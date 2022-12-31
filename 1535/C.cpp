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

    int len = s.size();
    int dp[len+1][2];

    dp[0][1] = dp[0][0] = 0;
    ll sum = 0;
    for (int i = 1; i <= len; i++) {
        if (s[i-1] == '1') {
            dp[i][0] = dp[i-1][1] + 1;
            dp[i][1] = 0;
        }
        else if (s[i-1] == '0') {
            dp[i][1] = dp[i-1][0] + 1;
            dp[i][0] = 0;
        }
        else {
            dp[i][1] = dp[i-1][0] + 1;
            dp[i][0] = dp[i-1][1] + 1;
        }
        sum += max(dp[i][1], dp[i][0]);
    }
    cout << sum << endl;
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

