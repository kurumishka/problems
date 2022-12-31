#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin >> n >> m;
    int x,y; cin >> x >> y;
    int c; cin >> c;
    vector<pair<int, int>> vecs;
    pair<int, int> temp;
    for (int i = 0; i < c; i++)
    {
        cin >> temp.first >> temp.second;
        vecs.push_back(temp);
    }
    int r = 0;
    int xr,yr,mi;
    for (int i = 0; i < c; i++)
    {
        if (vecs[i].first < 0)
            xr = (x-1)/abs(vecs[i].first);
        else if (vecs[i].first != 0)
            xr = (n-x)/vecs[i].first;

        if (vecs[i].second < 0)
            yr = (y-1)/abs(vecs[i].second);
        else if (vecs[i].second != 0)
            yr = (m-y)/vecs[i].second;

        if (!vecs[i].first || !vecs[i].second)
        {
            if (!vecs[i].second)
                yr = xr;
            else
                xr = yr;
        }

        mi = (xr < yr) ? xr : yr;
        r += mi;
        x += vecs[i].first * mi;
        y += vecs[i].second * mi;
    }
    cout << r << "\n";
    return 0;
}
