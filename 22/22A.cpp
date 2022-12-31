#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    int n; cin >> n;
    int arr[n], min, result;
    min = 101;

    for (int i = 0; cin >> arr[i]; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    result = min;
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min)
        {
            result = arr[i];
            break;
        }
    }
    if (result != min)
        cout << result << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
