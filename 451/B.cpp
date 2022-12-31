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
    int n; cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll tmp; cin >> tmp;
        v.pb(tmp);
    }
    vector<ll> sv = v;
    sort(all(sv));
    ll l = -1, r = -1;
    bool left = false;
    for (int i = 0; i < n; i++) {
        if (!left && v[i] != sv[i]) { left = true; l = i;}
        else if (left && sv[l] == v[i]) {r = i+1; break; }
    }
    if (l == -1 && r == -1)
        cout << "yes" << endl << 1 << " " << 1 << endl;
    else {
        reverse(v.begin()+l, v.begin()+r);
        if (v != sv)
            cout << "no" << endl;
        else
            cout << "yes" << endl << l+1 << " " << r << " " << endl;
    }
    return 0;
}
