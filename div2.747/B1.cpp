#include<bits/stdc++.h>
using namespace std;
#define ANS 1000000007

void solve() {
    int n,k;
    cin >> n >> k;
    bitset<64> s(k);
    long long res = 0;
    for (int i = 0; i < 64; i++)
        if (s[i] == 1) {
            long long r = 1;
            for (int j = 0; j < i; j++) {
                r*=n;
                r%=ANS;
            }
            res+=r;
            res%=ANS;
        }
    cout << res << endl;
}

signed main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
