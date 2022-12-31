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

V(int) res;

void gen() {
    for (int i = 1; i <= 10000; i++) {
        if (i%3 == 0 || i%10 == 3) continue;
        else res.pb(i);
    }
}

void solve() {
    int k;
    cin >> k;
    cout << res[k-1] << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    gen();
    times
    {
    solve();
    }
    return 0;
}
