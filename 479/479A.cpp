#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c; cin >> a >> b >> c;
    int max = 0;
    int temp;
    for (int i = 0; i < 6; i++)
    {
        switch (i)
        {
            case 0:
            temp = a+b+c;
            break;
            case 1:
            temp = a*b*c;
            break;
            case 2:
            temp = a+b*c;
            break;
            case 3:
            temp = a*b+c;
            break;
            case 4:
            temp = (a+b)*c;
            break;
            case 5:
            temp = a*(b+c);
            break;
        }
        if (temp > max)
            max = temp;
    }
    cout << max << "\n";

    return 0;
}
