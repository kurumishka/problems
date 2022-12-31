#include <bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string ss; cin >> ss;
    map<char, char> f;
    char temp;
    for (int i = 1; i <= 9; i++)
    {
        cin >> temp;
        f['0'+i] = temp;
    }
    bool state = false;
    for (int i = 0; i < n; i++)
    {
        if (ss[i] < f[ss[i]])
            state = true;
        else if (state && ss[i] > f[ss[i]])
            break;
        if (state)
            ss[i] = f[ss[i]];
    }
    cout << ss << "\n";
    return 0;
}
