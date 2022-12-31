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

int min_count(V(int) v, int n) {
    int min_c = 0;
    while (n) {
        bool ok = false;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > 0) {
                min_c+=v[i];
                v[i]--;
                ok = true;
                break;
            }
        }
        if (!ok) break;
        sort(all(v));
        n--;
    }
    return min_c;
}

int max_count(V(int) v, int n) {
    int max_c = 0;
    while (n) {
        bool ok = false;
        for (int i = v.size()-1; i >= 0; i--) {
            if (v[i] > 0) {
                max_c+=v[i];
                v[i]--;
                ok = true;
                break;
            }
        }
        if (!ok) break;
        sort(all(v));
        n--;
    }
    return max_c;
}

void solve() {
    int n, m;
    cin >> n >> m;
    V(int) v;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        v.pb(tmp);
    }
    sort(all(v));
    cout << max_count(v,n) << " " << min_count(v,n) << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
