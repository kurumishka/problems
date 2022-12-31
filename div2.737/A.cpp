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
    int n;
    cin >> n;
    vector<ll> m (n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        sum += m[i];
    }
    sort(m.begin(),m.end());
    double res = sum-m[m.size()-1];
    res /= (n-1);
    double ans = m[m.size()-1];
    ans+=res;
    printf("%.10lf\n", ans);
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
