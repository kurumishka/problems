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
    ll n; cin >> n;
    vector<ll> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(all(v));
    ll steps = 0;
    for (int i = 0; i < n; i++) {
        steps += abs((i+1)-v[i]);
    }
    cout << steps << endl;

    return 0;
}
