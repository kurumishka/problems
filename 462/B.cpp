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
bool ms(pair<char, ll>& a, pair<char, ll>& b)
{
    return a.S > b.S;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, ll> m;
    ll n,k; cin >> n >> k;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        if (m.count(s[i]))
            m[s[i]]++;
        else
            m[s[i]] = 1;
    }
    vector<pair<char, ll>> v;
    for (auto &x : m)
        v.pb(x);
    sort(all(v), ms);

    ll ans = 0, l = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].second < k) {
            k-=v[i].second;
            ans+=v[i].second*v[i].second;
        }
        else {
            ans+=k*k;
            break;
        }
    }
    cout << ans  << endl;
    return 0;
}
