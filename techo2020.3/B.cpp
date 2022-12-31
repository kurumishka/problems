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
    V(int) a(n);
    int m = -1;
    for(auto& x:a) {
        cin >> x;
        if (x > m) m = x;
    }
    int cur = a.back(), k = 0;
    for(int i = n-1; i >= 0; --i) {
        if (cur == m)
            break;
        if (a[i] > cur) {
            cur = a[i];
            k++;
        }
    }
    cout << k << endl;

}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
