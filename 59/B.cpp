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
    ll sum = 0;
    vector<int> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp%2) v.pb(tmp);
        else sum+=tmp;
    }
    sort(all(v));
    reverse(all(v));

    if (!v.size()) {
        cout << 0 << endl;
        return 0;
    }

    for (int x : v)
        sum+=x;
    if (!(sum%2))
        sum-=v[v.size()-1];
    cout << sum << endl;
    return 0;
}
