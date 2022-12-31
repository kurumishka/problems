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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int _min = min(min(a,b),c);
    int _max = T_MAX(a,b,c);
    int med = a+b+c-_min-_max;
    int ans = 0;
    if (med-_min < d) ans = d-(med-_min);
    if (_max-med < d) ans += d-(_max-med);
    cout << ans << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
