#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times ll t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    times
    {
        ll n;
        cin >> n;
        ll res = ((n+1)/2)*5;
        cout << ((n <= 6) ? 15 : res) << endl;
    }
    return 0;
}
