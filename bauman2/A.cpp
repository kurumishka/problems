#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n;
    cin >> n;
    int m = n%4;
    if (m == 1)
        cout << 2 << endl;
    else if (m == 2)
        cout << 4 << endl;
    else if (m == 3)
        cout << 8 << endl;
    else
        cout << 6 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
