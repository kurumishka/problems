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
    int a,b;
    cin >> a >> b;
    if (a == 9 && b == 1)
        cout << 999 <<  " " << 1000 << endl;
    else if (b-a == 1) 
        cout << a << 99 << " " << b << "00" << endl;
    else if (b==a) 
        cout << a << 11 << " " << b << 12 << endl;
    else
        cout << -1 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
