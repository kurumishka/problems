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
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(all(v));
    ll d = v[v.size()-1] - v[0];
    ll min_t = 0, max_t = 0;
    for (int i = 0; i < n; i++) {
        if (v[0] == v[i]) min_t++;
        else if (v[0] < v[i]) break;
    }
    for (int i = n-1; i >= 0; i--) {
        if (v[n-1] == v[i]) max_t++;
        else if (v[n-1] > v[i]) break;
    }
    cout << d << " " << ((min_t == n) ? (min_t*(min_t-1))/2 : min_t*max_t) << endl;
    return 0;
}
