#include <bits/stdc++.h>
using namespace std;

#define loop(zero, v) for (int i = zero; i < v; i++)

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    int f,_s;
    f = _s = 0;
    loop(0,s.size())
    {
        if (s[i] == '4') f++;
        else if (s[i] == '7') _s++;
    }
    if (!f && !_s)
        cout << -1 << "\n";
    else if (f >= _s)
        cout << "4" << "\n";
    else
        cout << "7" << "\n";
    return 0;
}
