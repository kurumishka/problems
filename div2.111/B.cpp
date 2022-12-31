#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    vector<ll> ans;
    while(t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        string ss; cin >> ss;

        if (b >= 0)
        {
            ll res = a*ss.size()+b*ss.size();
            ans.pb(res);
            continue;
        }

        int zero = 0,one = 0;
        for (int i = 0; i < n; i++)
        {
            if (ss[i] == '1')
                one++;
            else
                zero++;
        }

        ll r = 0;
        vector<ll> one_s, zero_s;

        ll c = 0;
        for (int i = 0; i < n; i++)
        {
            c++;
            if (i+1 < n && ss[i+1] != ss[i])
            {
                if (ss[i] == '1') one_s.pb(c);
                else zero_s.pb(c);
                c = 0;
            }
        }
        if (c)
        {
            if (ss[ss.size()-1] == '0')
                zero_s.pb(c);
            else
                one_s.pb(c);
        }
        if (zero_s.size() > one_s.size())
        {
            for (ll &x : one_s)
                r += a*x+b;
            r += a*zero+b;
        }
        else
        {
            for (ll &x : zero_s)
                r += a*x+b;
            r+=a*one+b;
        }
        ans.pb(r);

    }
    for (ll& x : ans)
        cout << x << endl;
    return 0;
}
