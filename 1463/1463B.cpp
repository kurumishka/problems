#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        int n, temp; cin >> n;
        vector<int> v;
        int o = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (i%2)
                e += temp;
            else
                o += temp;
            v.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            if (e > o)
            {
                if (i%2)
                    cout << v[i] << " ";
                else
                    cout << 1 << " ";
            }
            else
            {
                if (i%2)
                    cout << 1 << " ";
                else
                    cout << v[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
