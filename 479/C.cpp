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
typedef pair<int, int> pi;

void solve() {
    int n;
    cin >> n;
    V(pi) v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].F >> v[i].S;
    int ans = 0;
    sort(all(v));
    for (int i = 0; i < n; i++) {
        if (v[i].S < ans) ans=v[i].F;
        else ans=v[i].S;
    }
    cout << ans << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
