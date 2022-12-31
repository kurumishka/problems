#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long

int n, h;
V<int> sec;

inline bool check(int k) {
    int sum = 0;
    for (int i = 1; i < n;++i) {
        if (sec[i]-sec[i-1] < k)
            sum+=(sec[i]-sec[i-1]);
        else
            sum+=k;
    }
    sum+=k;
    return (sum >= h);
}

void solve() {
    cin >> n >> h;
    sec = V<int> (n);
    for (auto& x : sec)
        cin >> x;


    int k = 0;
    for(int z = h; z >= 1; z/=2)
        while(!check(z+k)) k+=z;
    cout << k+1 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    while(t--)

    solve();
    return 0;
}
