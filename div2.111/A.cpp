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
        int n; cin >> n;
        vector<ll> v;
        int sum = 0;
        int c = 1;
        for (int i = 0; i < n; i++)
        {
            if (sum >= n)
                break;
            v.pb(c);
            sum+=c;
            c+=2;
        }
        ans.pb(v.size());
    }

    for (ll &x : ans)
        cout << x << endl;
    return 0;
}
