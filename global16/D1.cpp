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

typedef pair<int,int> pi;

void solve() {
    int n, m;
    cin >> n >> m;
    V(int) v(m);
    map<int,int> ind_val;
    for (int i = 0; i < m; i++) {
        cin >> v[i];
        ind_val[i] = v[i];
    }
    V(pi) val;
    for (auto it = ind_val.begin(); it != ind_val.end(); it++)  {
        val.pb(*it);
    }
    sort(all(val), [](pi &a, pi &b){return a.S < b.S;});
    map<int, pair<int,bool>> pos;
    int off = 0;
    for (int i = 0; i < m; i++) {
        int value = val[i].S;
        if (!off) {
            for (int j = i; j < m; j++) {
                if (val[j].S == value) off++;
                else break;
            }
        }
        pos[val[i].F] = {i+off, false};
        off--;
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (pos[j].S && pos[j].F < pos[i].F) ans++;
        }
        pos[i].S = true;
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
