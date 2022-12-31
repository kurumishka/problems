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

void solve() {
    int m,n;
    cin >> m >> n;
    vector<int> v (m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
    sort(all(v));
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] >= 0) break;
        k -=v[i];
    }
    cout << k << endl;

}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
