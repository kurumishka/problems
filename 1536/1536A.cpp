#include <bits/stdc++.h>
typedef unsigned int ui;
using namespace std;
#define endl "\n"
#define all(x) x.begin(),x.end()
main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v;
        unordered_set<int> cs;
        int temp;
        bool neg = false;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (!neg && temp < 0) neg = true;
            v.push_back(temp);
            cs.insert(temp);
        }
        if (neg)
        {
            some:
            cout << "NO" << endl;
            continue;
        }
        sort(all(v));
        reverse(all(v));
        int dop = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (j!=i && !cs.count(abs(v[i]-v[j])))
                {
                    cs.insert(abs(v[i]-v[j]));
                    v.push_back(abs(v[i]-v[j]));
                }
                if (v.size() > 300)
                    goto some;
            }
        }
        cout << "YES" << endl << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
