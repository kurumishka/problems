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
    V(int) v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    int ans = 0, nl = 0;
    int d = 1e9;
    for (int i = 1; i < n; i++) {
        if (v[i] <= 0)
            d = min(d,abs(v[i-1]-v[i]));
        else break;
    }
    if (v[0] == 0) {
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) ans++;
            else break;
        }
        if (ans == 1 && v.back() != 0) ans++;
        cout << ans << endl;
        return;
    }
    else if (v.back() == 0) {
        cout << v.size() << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (v[i] < 0)
            ans++;
        else if (v[i] == 0) {
            nl++;
            ans++;
            if (nl == 2)
                break;
        }
        else {
            if (d != 1e9) {
                if (v[i] <= d)
                    ans++;
                break;
            }
            ans++;
            break;
        }
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
