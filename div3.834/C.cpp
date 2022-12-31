#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define int long long
template<typename T> 
using V = std::vector<T>;
using namespace std;
#define no do{cout<<-1<<endl;return;}while(0)
void solve() {
    int l, r, x;
    int a, b;
    cin >> l >> r >> x >> a >> b;
    if (a==b){cout<<0<<endl;
    return;}
    if (b < l || b > r) no;
    if (abs(b-a) >= x)cout<<1<<endl;
    else {
        if (abs(l-b)>=x&&abs(a-l)>=x)cout<<2<<endl;
        else if(abs(r-b)>=x && abs(a-r)>=x) cout << 2 << endl;
        else if (abs(l-a)>=abs(r-a) && abs(a-l)>=x&&abs(r-l)>=x&&abs(r-b)>=x) cout << 3 << endl;
        else if (abs(r-a)>=abs(l-a)&&abs(a-r)>=x&&abs(r-l)>=x&&abs(l-b)>=x) cout << 3 << endl;
        else no;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
