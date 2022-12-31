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

int ans = 0;
map<int, set<int>> gr;
map<int, set<int>> ban;
set<int> unvis;

void build_road(int node) {
    if (!unvis.size()) return;
    V(int) d;
    for (auto &x : unvis) {
        if (ban.count(node) && ban[node].count(x)) continue;
        else if (ban.count(x) && ban[x].count(node)) continue;
        d.pb(x);
        gr[node].insert(x);
        ans++;
    }
    for (auto &x : d)
        unvis.erase(x);
}

void solve() {
    int n, m;
    cin >> n >> m;
    set<int> banned;
    for (int i = 1; i <= n; i++)
        unvis.insert(i);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        ban[a].insert(b);
        banned.insert(a);
        banned.insert(b);
    }
    
    for (int i = 1; i <= n; i++) {
        if (!banned.count(i)) {
            unvis.erase(i);
            build_road(i);
            break;
        }
    }


    cout << ans << endl;
    for (auto it = gr.begin(); it != gr.end(); it++) {
        for (auto &x : it->second) {
            cout << it->first << " " << x << endl;
        }
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
