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
    int n, k;
    cin >> n >> k;
    vector<int> v (n);
    for (int i = 0; i < n; i++) {
        v[i] = i+1;
    }
    reverse(v.begin(), v.begin()+k+1);
    for (auto &x : v) cout << x << " ";
    cout << endl;
    return 0;
}
