#include <bits/stdc++.h>
using namespace std;
#define loop(zero, v) for (int i = zero; i <= v; i++)

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n];
    loop(0,n-1)
        cin >> arr[i];

    int c = 0;
    int curr = 1;
    sort(arr, arr+n);
    loop(0,n-1)
    {
        if (arr[i] >= curr)
        {
            c++;
            curr++;
        }
    }

    cout << c << "\n";
    return 0;
}
