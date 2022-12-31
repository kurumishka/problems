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
   int n;
   cin >> n;
   V(int) a(n);
   for (int i = 0; i < n; i++) {
    cin >> a[i];
   }
   int ans = 0;
   for (int i = 0; i < n-1; i++) {
    if (max(a[i], a[i+1])-min(a[i], a[i+1]) > min(a[i],a[i+1])) {
        int d = min(a[i],a[i+1]);
        while (d*2 < max(a[i],a[i+1])) {
            ans++;
            d*=2;
        }
    }
   }
   cout << ans << endl;
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
