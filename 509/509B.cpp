#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string ans(int n, int k)
{
    string res = string();
    int st = 1;
    for (int i = 0; i < n; i++)
    {
        if (st > k) st = 1;
        res = res + to_string(st) + " ";
        st++;
    }
    return res;
}
main()
{
    int n, k; cin >> n >> k;
    vector<int> v, v2;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    v2 = v;
    sort(v2.begin(),v2.end());
    if (v2[v2.size()-1]-k-v2[0] > 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans(v[i],k) << endl;
        }
    }
    return 0;
}
