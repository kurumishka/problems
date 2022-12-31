#include<bits/stdc++.h>
using namespace std;
// #define int long long

main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if (!(n%2))
        {
            cout<<n/2<<" "<<n/2<<"\n";
            continue;
        }
        int d = 3;
        int l = 0;
        while(l<100000 &&n%d)
        {
            l++;
            d+=2;
        }
        if (n%d) d=n;
        cout<<n/d<<" "<<n-n/d<<"\n";
    }
    return 0;
}
