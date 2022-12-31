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
typedef pair<int,int> pi;
void solve() {
    int n;
    cin >> n;
    V(int) seg (n);
    for (int i = 0; i < n; i++)
        cin >> seg[i];

    V(pi) used;
    int curr = seg[0];
    for (int i = 1; i < n; i++) {
        int l = min(curr, seg[i]);
        int r = max(curr, seg[i]);
        for (auto &x : used) {
            if (((x.F > l && x.F < r) && (x.S < l || x.S > r)) || ((x.S > l && x.S < r) && (x.F < l || x.F > r))) {
                cout << "yes" << endl;
                return;
            }
        }
        used.pb({l,r});
        curr = seg[i];
    }
    cout << "no" << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
