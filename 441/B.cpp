#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
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
    int n, v;
    cin >> n >> v;
    V(pii) pv (n);
    for (int i = 0; i < n; i++)
        cin >> pv[i].F >> pv[i].S;
    sort(all(pv));
    int d = 1;
    ll sum = 0;
    ll g = 0;
    int mv = v;
    for (int i = 0; i < n; i++) {
        if (d < pv[i].F) {
            d = pv[i].F;
            v = mv;
        }
        while ((d == pv[i].F || d == pv[i].F+1) && pv[i].S > 0) {
            g = 0;
            g = (pv[i].S >= v) ? v : pv[i].S;
            pv[i].S -= g;
            sum += g;
            if (g == v) {v=mv; d++;}
            else {v-=g; break;};
        }
    }
    cout << sum << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
