#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = n-1; i >= 0; --i)
        if (s[i] == '1') {
            int d = n-1-i;
            if (k < d) break;
            k-=d;
            for (int j = i; j < n-1; ++j)
                swap(s[j], s[j+1]);
            break;
        }
    for (int i = 0; i < n; ++i)
        if (s[i] == '1' && i != n-1){
            if(k < i) break;
            for (int j = i; j > 0; --j)
                swap(s[j], s[j-1]);
            break;
        }
    int ans = 0;
    for (int i = 0; i < n-1; ++i){
        if (s[i]=='1'){
            if (s[i+1]=='1') ans+=11;
            else ans+=10;
        }
        else
            if (s[i+1]=='1') ans+=1;
    }
    cout << ans << endl;
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
