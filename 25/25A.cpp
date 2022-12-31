#include <bits/stdc++.h>
using namespace std;

#define loop(zero, v) for (int i = zero; i < v; i++)

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int arr[n];

    int e,ne;
    e = ne = 0;

    loop(0, n)
    {
        cin >> arr[i];
        if (arr[i]%2)
            ne++;
        else
            e++;
    }

    int r;
    loop(0,n)
    {
        if ((arr[i]%2 && e > ne) || (!(arr[i]%2) && ne > e))
        {
            r = i+1;
            break;
        }
    }
    cout << r << "\n";
    return 0;
}