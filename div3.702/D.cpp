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

map<int, int> tree;

void build(V(int) &part, int v = 0) {
     if (part.size() == 0) return;
     else if (part.size() == 1) {
        tree[part[0]] = v;
        return;
     }
     int m = 0;
     V(int) left, right;
     int in = 0;
     for (int i = 0; i < part.size(); i++) {
        if (part[i] > m) { in = i; m = part[i];}
     }
     for (int i = 0; i < part.size(); i++) {
        if (part[i] == m) break;
        left.pb(part[i]);
     }
     for (int i = in+1; i < part.size(); i++)
        right.pb(part[i]);
     tree[m] = v;
     build(left, v+1);
     build(right, v+1);
}

void solve() {
    int n;
    cin >> n;
    V(int) v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    build(v);
    for (int i = 0; i < n; i++)
        cout << tree[v[i]] << " ";
    cout << endl;
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
