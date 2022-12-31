#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define fr(na,ze,va) for (auto na = ze; na < va; na++)
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll f1 = 0,f2 = 1;
    if (n==0) {f2 = 0; goto podolsk;}
    while (f1+f2 != n) {
        ll tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    podolsk:
    cout << 0 << " " << f1 << " " << f2 << endl;
    return 0;
}
