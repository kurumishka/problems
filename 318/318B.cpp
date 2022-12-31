#include <bits/stdc++.h>
using namespace std;

#define int long long

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string ss; cin >> ss;
    int count = 0;
    int result = 0;
    for (int i = 0; i < ss.size(); i++)
    {
        if (i < ss.size()-4 && ss[i] == 'h' && ss[i+1] == 'e'\
            && ss[i+2] == 'a' && ss[i+3] == 'v' && ss[i+4] == 'y')
        {
            count++;
            i+=4;
            continue;
        }
        if (i < ss.size()-4 && ss[i] == 'm' && ss[i+1] == 'e'\
            && ss[i+2] == 't' && ss[i+3] == 'a' && ss[i+4] == 'l')
        {
            result += count;
            i+=4;
        }
    }

    cout << result << "\n";
    return 0;
}
