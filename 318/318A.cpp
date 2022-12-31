#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long ll;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ld k,n; cin >> n >> k;
    ld h = ceil(n/2);

    if (k > h)
        cout << (ll)(k-h)*2 << "\n";
    else
        cout << (ll)(k*2-1) << "\n";
    return 0;
}