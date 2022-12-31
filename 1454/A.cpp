#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int n;
    cin >> n;
    V(int) v(n);
    for (int i = 0; i < n; i++)
        v[i]=i+1;
    for (int i = 0; i < n-1; i+=2)
        swap(v[i],v[i+1]);
    if (n%2) swap(v[0],v[v.size()-1]);
    for (auto &x : v) cout << x << " ";
    cout << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
