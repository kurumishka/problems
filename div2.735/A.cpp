#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    times
    {
        int n; cin >> n;
        vector<ll> v(n);
        ll max = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n-1; i++) {
            if (v[i]*v[i+1] > max) {
                max = v[i]*v[i+1];
            }
        }
        cout << max << endl;


    }
    return 0;
}
