#include <bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;
    string ss; cin >> ss;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (ss[j] == 'B' && ss[j+1] == 'G')
            {
                swap(ss[j], ss[j+1]);
                j++;
            }
        }
    }
    cout << ss << "\n";
    return 0;
}
