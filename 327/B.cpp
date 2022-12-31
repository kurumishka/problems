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
    int n;
    cin >> n;
    V(bool) v (10000000, true);
    for (int i = 2; i*i < 10000000; i++) {
        if (v[i] == false) continue;
        for (int j = i*i; j < 10000000; j+=i)
            v[j] = false;
    }
    int ok = 0;
    for (int i = 2; ok != n; i++)
        if (v[i]) { ok++; cout << i << " "; }
    cout << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
