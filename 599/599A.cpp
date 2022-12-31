#include <bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d1,d2,d3;cin>>d1>>d2>>d3;
    int sum = 0;
    sum += (d1 > d2) ? d2 : d1;
    sum += (d1+d2 > d3) ? d3 : d1+d2;
    if (d1 > d2)
        sum += (d1 > d3+d2) ? d3+d2 : d1;
    else
        sum += (d2 > d3+d1) ? d3+d1 : d2;
    cout<<sum<<"\n";
    return 0;
}
