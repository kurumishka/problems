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
    times
    {
        ll n; cin >> n;
        if (n < 10 && n != 9) cout << 0 << endl;
        else if (n == 9) cout << 1 << endl;
        else {
            int res = n%10;
            int ans = n/10;
            if (res == 9) ans++;
            cout << ans << endl;
        }
    }
    return 0;
}
