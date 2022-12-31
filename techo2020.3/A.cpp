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
    for(auto &x:a)
        cin >> x;
    int s = (a[0] == 1) ? 2 : 1;
    for(int i = 1; i < n; i++) {
        if (a[i-1] == 1 && a[i] == 1)
            s+=5;
        else if (a[i-1] == 0 && a[i] == 0) {
            s=-1;
            break;
        }
        else if (a[i-1] == 0 && a[i] == 1)
            s+=1;
    }
    cout << s << endl;
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
