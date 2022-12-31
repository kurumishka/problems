#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    int state;

    for (int i = 0; i < s.size(); i++)
    {
        if (!i)
        {
            state = 1;
            continue;
        }
        if (s[i] == s[i-1])
            state++;
        else
            state=1;

        if (state == 7)
            break;
    }

    if (state == 7)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
