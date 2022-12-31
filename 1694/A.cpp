#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


void solve() {
    int a, b;
    cin >> a >> b;
    map<int, char> m;
    m[a] = '0';
    m[b] = '1';
    int s = abs(a-b);
    int c = 0;
    if (a == b) {
        for (int i = 0; i < a+b; ++i) {
            if (i%2) cout << '0';
            else cout << '1';
        }
        goto end;
    }
    for (int i = 0; i < a+b; ++i) {
        if (c == s) {
            cout << m[min(a,b)];
            --c;
        } else {
            cout << m[max(a,b)];
            ++c;
        }
    }
end:
    cout << endl;
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
