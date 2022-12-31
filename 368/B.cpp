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
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int dp[n];
    unordered_set<int> us;
    reverse(arr, arr+n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            dp[i] = 1;
            us.insert(arr[i]);
        }
        else {
            if (!us.count(arr[i])) {
                dp[i] = dp[i-1]+1;
                us.insert(arr[i]);
            }
            else
                dp[i] = dp[i-1];
        }
    }
    for (int i = 0; i < m; i++) {
        int j; cin >> j;
        cout << dp[n-j] << endl;
    }
    return 0;
}
