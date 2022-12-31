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
    int n, k;
    cin >> n >> k;
    V(int) v(k);
    for (int i = 0; i < k;i++)
        cin >> v[i];
    sort(all(v), [](int &a, int &b) {return a > b;});
    int sum = 0, ans = 0;
    for (int i = 0; i < k; i++) {
        if (sum >= v[i]) {
            break;
        }
        ans = i+1;
        sum +=n-v[i];
    }
    cout << ans << endl;
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
