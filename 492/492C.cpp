#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,r,avg;
    cin >> n >> r >> avg;
    vector<pair<ll,ll>> vpi;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll a,b;
        cin >> a >> b;
        sum += a;
        pair<ll, ll> pl = {b, a};
        vpi.push_back(pl);
    }
    if (sum >= n*avg)
        cout << 0 << "\n";
    else
    {
        sort(all(vpi));
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll av = 0;
            if (vpi[i].second < r)
            {
                av = r-vpi[i].second;
                if (sum+av >= n*avg)
                {
                    ans+=vpi[i].first*(n*avg-sum);
                    break;
                }
                else
                {
                    sum+=av;
                    ans+=vpi[i].first*av;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}