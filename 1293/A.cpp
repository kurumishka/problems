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

void solve() {
    int n, s, k;
    cin >> n >> s >> k;
    US(int) us;
    for (int i = 0; i < k; i++) {
        int temp;
        cin >> temp;
        us.insert(temp);
    }
    int ans = 0;
    int left, right;
    left = (s-1000 >= 0) ? s-1000 : 0;
    right = (s+1000 <= n) ? s+1000 : n;
    int d = 1e9;
    for (int i = left; i <= right; i++) {
        if (!i) continue;
        if (abs(s-i) < d && !us.count(i)) {
            d = abs(s-i);
            ans = i;
        }
    }
    cout << d << endl;
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
