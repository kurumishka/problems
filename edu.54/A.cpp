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
    string s;
    cin >> s;
    string ans;
    int r = -1;
    for (int i = 1; i < n; i++) {
        if (s[i-1] > s[i]) {
            r = i-1;
            break;
        }
    }
    if (r == -1) {
        r = s.size()-1;
    }
    for (int i = 0; i < n; i++)
        if (i != r) cout << s[i];
    cout << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
