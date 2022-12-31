#include <bits/stdc++.h>
#pragma GCC optimization_level 3
using namespace std;
#define int long long
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    int n; cin >> n;
    vector<int32_t> ans;
    bool no = false;
    while(n > 0)
    {
        if (!(n%7))
        {
            for (int i = 0; i < n/7; i++)
                ans.push_back(7);
            break;
        }
        else if (!(n%4))
        {
            int r = n/4;
            for (int i = 0; i<r; i++)
            {
                ans.push_back(4);
                n-=4;
                if (!(n%7))
                {
                    for (int j = 0; j < n/7; j++)
                    {
                        ans.push_back(7);
                    }
                    break;
                }
            }
            break;
        }
        ans.push_back(4);
        n-=4;
        if (n < 7 && n%4)
        {
            no = true;
            break;
        }
    }
    if (no) cout << -1 << "\n";
    else {
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)cout << ans[i];
    cout << "\n";
    }
    return 0;
}
