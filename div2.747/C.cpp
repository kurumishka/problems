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
    char a;
    cin >> a;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n; i++)
        if (s[i] != a)
            c++;
    int pos = -1;
    if (c == 0) 
        cout << 0 << endl;
    else if (s.back() == a)
        cout << 1 << endl << n << endl;
    else if (c == 1 && s.back() != a) 
        cout << 1 << endl << n-1 << endl;
    else {
        for (int i = n/2; i <= n; i++) {
            if (i == n/2 && n%2 == 0) continue;
            else if (i == n/2 && n%2) continue;
            if (s[i-1] == a) {
                pos = i;
                break;
            }
        }
        if (pos != -1)
            cout << 1 << endl << pos << endl;
        else
            cout << 2 << endl << n-1 << " " << n << endl;
    }
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
