#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, pair<int, int>>> vp;
    int t; t = 2;
    while (t <= n*2)
    {
        pair<int, pair<int, int>> temp;
        for (int i = 0; i < t-1; i++)
        {
            cin >> temp.first;
            temp.second = {t, i+1};
            vp.push_back(temp);
        }
        t++;
    }

    map<int, int> mii;
    sort(all(vp));
    reverse(all(vp));

    int team = 0;
    for (int i = 0; team != 2*n; i++)
    {
        if (!mii.count(vp[i].second.first) &&\
            !mii.count(vp[i].second.second))
        {
            mii[vp[i].second.first] = vp[i].second.second;
            mii[vp[i].second.second] = vp[i].second.first;
            team += 2;
        }
    }

    for (int i = 1; i <= team; i++)
        cout << mii[i] << " ";
    cout << "\n";
    return 0;
}