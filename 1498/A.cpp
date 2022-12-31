#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)

#define int long long

inline bool check(int n) {
    int c = n, sum = 0;
    while(c){
        sum+=c%10;
        c/=10;
    }
    return (__gcd(sum,n)==1);
}

void solve() {
    int n;
    cin >> n;
    for (int i = n; i < 100+n;++i)
        if (!check(i)){
            cout << i << endl;
            return;
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
