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
        int a,b,c;
        cin >> a >> b >> c;
        ll f = 1;
        for (int i = 0; i < b-c; i++)
        {
            f*=10;
            f+=1;
        }
        f = f*pow(10, c-1);
        ll s = pow(10, a-1);
        cout << s << " " << f << endl;
        //cout << __gcd(f,s) << endl;
    }
    return 0;
}
