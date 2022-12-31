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
    int n, m;
    cin >> n >> m;
    V(string) a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int u = 0, d = 0, pred = -1;
    for (int i = 0; i < m; i++) {
        int c = 0;
        for (int j = n-1; j >= 0; j--) {
            if (a[j][i] == '*') c++;
            else break;
        }
        if (pred == -1) {
            pred = c;
            continue;
        }
        u = max(u,c-pred);
        d = max(d,pred-c);
        pred = c;
    }
    cout << u << " " << d << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
