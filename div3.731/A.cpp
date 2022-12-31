#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int xa,ya,xb,yb,xf,yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        int sum = abs(xa-xb)+abs(ya-yb);
        if (ya == yf && yb == yf)
        {
            if (xf > min(xa,xb) && xf < max(xa,xb))
                sum += 2;
        }
        else if (xa == xf && xb == xf)
        {
            if (yf > min(ya,yb) && yf < max(ya,yb))
                sum += 2;
        }
        cout << sum << "\n";
    }
    return 0;
}
