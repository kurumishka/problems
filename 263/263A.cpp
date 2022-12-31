#include <bits/stdc++.h>
using namespace std;

int 
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y;
    x = 0;
    y = 1;
    int temp;
    for (int i = 0; cin>>temp; i++)
    {
        x++;
        if (temp == 1) break;
        if (x == 5) {x=0;y++;}
    }

    cout << abs(x-3)+abs(y-3) << "\n";
    return 0;
}
