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

int m[1000000];

void gen() {
    int res = 0;
    for (int i = 0; i < 1000000; i++) {
        res ^= i;
        m[i] = res;
    }
}

void solve() {
    int a, b;
    cin >> a >> b;
    int res = m[a-1];
    if (res == b) cout << a << endl;
    else if (res == 0)
        cout << ((a == b) ? a+2 : a+1) << endl;
    else
        cout << (((res ^ a) == b) ? a+2 : a+1) << endl;
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
