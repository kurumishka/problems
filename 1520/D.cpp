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
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define US(T) unordered_set<T>

void solve() {
    int n;
    cin >> n;
    map<ll,ll> m;
    for (int i = 1; i <= n; i++) {
        ll temp;
        cin >> temp;
        temp-=i;
        m[temp]++;
    }
    ll ans = 0;
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second > 1) ans = ans + (it->second*(it->second-1))/2;
    }
    cout << ans << endl;
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
