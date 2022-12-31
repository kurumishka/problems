#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
bool comp(pair<int, int> &a, pair<int, int> &b) {
    return (a.first > b.first || (a.first == b.first && a.second < b.second));
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v), comp);
    pair<int, int> p = v[k-1];
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == p) ans++;
    }
    cout << ans << endl;
    return 0;
}
