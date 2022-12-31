#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    int t, n, g;
    cin >> t;
    while (t--)
    {
        cin >> n;
        g = __gcd(n, 100-n);
        cout << n/g+(100-n)/g << endl;
    }
    return 0;
}
