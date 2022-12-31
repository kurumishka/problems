#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    short n; cin >> n;
    int x = 0;
    while(n--)
    {
        string s; cin >> s;
        if (s[0] == '-' || s[1] == '-')
            x--;
        else
            x++;
    }
    cout << x << "\n";
    return 0;
}
