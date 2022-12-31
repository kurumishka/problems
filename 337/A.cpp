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
    int n,m;
    cin >> n >> m;
    V(int) paz (m);
    for (int i = 0; i < m; ++i) {
        cin >> paz[i];
    }
    sort(all(paz));
    int min_dif = 10000000;
    for (int i = 0; i <= m-n; i++) {
        if (paz[i+(n-1)]-paz[i] < min_dif)
            min_dif = paz[i+(n-1)]-paz[i];
    }
    cout << min_dif << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
