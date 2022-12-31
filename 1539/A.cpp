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
        ll n, x, tr;
        cin >> n >> x >> tr;
        ll d = min(n,tr/x);
        ll sum = (n-d)*d;
        sum += d*d-(d*(d+1))/2;
        cout << sum << endl;
    }
    return 0;
}
