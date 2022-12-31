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
    int n, k;
    cin >> n >> k;
    V(ll) a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    V(ll) b = a;
    sort(all(b));
    map<ll, ll> next;
    for (int i = 0; i < n-1; i++)
        next[b[i]] = b[i+1];

    V(int) sorted;
    int len = 1;
    for (int i = 0; i < n-1; i++) {
        if (next.count(a[i]) && next[a[i]] == a[i+1]) len++;
        else {
            if (len != 1) sorted.pb(len);
            len = 1;
        }
    }
    if (len != 1)
        sorted.pb(len);
    ll sum = 0;
    for (int x : sorted) sum += x;

    if (k < sorted.size()+(n-sum)) cout << "NO" << endl;
    else cout << "YES" << endl;
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
