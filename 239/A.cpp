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
    ll y,k,n;
    cin >> y >> k >> n;
    ll res = -1;
    ll s = 1;
    if (y < 2*k) s = k*2-y;
    if (y < k) s = k-y;
    for (int i = s; i <= n; i++) {
        if ((y+i)%k == 0 && y+i <= n) {
            res = i;
            break;
        }
        else if (y+i > n) break;
    }
    if (res == -1) cout << res << endl;
    else {
        while (y+res <= n) {
            cout << res << " ";
            res+=k;
        }
        cout << endl;
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
