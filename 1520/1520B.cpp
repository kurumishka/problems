#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define loop(val,zero,v) for (int val = zero; val <= v; val++)
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> il;
    loop(i,0,8)
    {
        int current = i+1;
        loop(j,0,8)
        {
            il.push_back(current);
            current = current*10 + (i+1);
        }
    }
    sort(all(il));
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int c = 1;
        for (int i = 0; i < 81; i++)
        {
            if (n >= il[i] && n < il[i+1])
                break;
            else
                c++;
        }
        cout << c << "\n";
    }
    return 0;
}
