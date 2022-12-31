#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    for (char x : s)
    {
        if (x == 'H' || x == 'Q' || x == '9')
        {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}
