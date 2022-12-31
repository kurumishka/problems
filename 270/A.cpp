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

US(double) edge;

void gen() {
    for (int i = 3; i <= 10000; ++i) {
        double an = (((double)i-2)/i)*180;
        edge.insert(an);
    }
}

void solve() {
    double n;
    cin >> n;
    cout << ((edge.count(n)) ? "YES" : "NO") << endl;
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
