#include <bits/stdc++.h>
using namespace std;

#define R(s) string res = s; cout << res << endl

int
main(void)
{
    int n, x, y, z; cin >> n;
    int xs, ys, zs;
    xs = ys = zs = 0;
    while (n--)
    {
        cin >> x >> y >> z;
        xs += x; ys += y; zs += z;
    }
    R((!xs && !ys && !zs) ? "YES" : "NO");
}
