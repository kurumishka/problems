#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);
    reverse(arr, arr+n);

    int take = 0;

    for (int i = 0; i < n; i++)
    {
        take += arr[i];
        sum -= arr[i];
        if (take > sum) { cout << i+1 << "\n"; return 0;}
    }
    return 0;
}
