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
    int n, f=0;
    cin >> n;
    string s;
    cin >> s;
    string result (n, ' ');
    if (s[0] != '9'){
        for(int i = 0; i<n;++i)
            result[i]=(9-(s[i]-'0'))+'0';
        goto end;
    }
    for (int i = n-1; i >= 0; --i) {
        int d = (11-(s[i]-'0')-f);
        if (d>=10) {d%=10;f=0;}
        else f=1;
        result[i] = ('0'+d);
    }
    end:
    cout << result << endl;
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
