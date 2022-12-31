#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    times
    {
        int n, x; cin >> n >> x;
        vector<int> v;
        ll sum = 0;
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            v.pb(temp);
            sum += temp;
            if (temp%x)
            {
                if (l == -1)
                    l = i+1;
                r = i;
            }
        }
        if (l == -1)
            cout << -1 << endl;
        else if (sum%x)
            cout << n << endl;
        else
            cout << n-min(n-r,l) << endl;
    }
    return 0;
}
