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
    V(int) v(2*n);
    for (int i = 0; i < 2*n; i++)
        cin >> v[i];
    sort(all(v));
    V(int) a(n);
    for (int i = 0; i < n; i++)
        a[i] = v[i+n];
    sort(all(a), [](int &a, int &b) {return a > b;});
    for (int i = 0; i < n; i++)
        cout << v[i] << " " << a[i] << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
