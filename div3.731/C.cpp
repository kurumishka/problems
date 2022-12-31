#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int k, n, m; cin >> k >> n >> m;
        vector<int> v1,v2,r;
        int oz = 0, sz = 0;
        for (int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            v1.push_back(temp);
        }
        for (int i = 0; i < m; i++)
        {
            int temp; cin >> temp;
            v2.push_back(temp);
        }

        int a = 0, b = 0;
        for (int i = 0; i < v1.size()+v2.size(); i++)
        {
            if (a < v1.size() && v1[a] <= k)
            {
                if (!v1[a]) k++;
                r.push_back(v1[a++]);
            }
            else if (b < v2.size() && v2[b] <= k)
            {
                if (!v2[b]) k++;
                r.push_back(v2[b++]);
            }
            else
                break;
        }

        if (r.size() != v1.size()+v2.size())
            cout << -1 << "\n";
        else
        {
            for (int x : r)
                cout << x << " ";
            cout << "\n";
        }

    }
    return 0;
}