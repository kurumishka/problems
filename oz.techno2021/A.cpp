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
    int a = 0, b = 1, c = 2;
    for (int i = 0; i <= 100; i++) {
        if (a+b+c+i*3 > n) {
            cout << -1 << endl;
            return;
        }
        else if (a+b+c+i*3 == n) {
            cout << a+i << " " << b+i << " " << c+i << endl;
            return;
        } 
    }
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
