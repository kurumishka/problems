#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    int k, n, temp; cin >> k >> n;
    int r = 0; int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }

    int s = arr[n-1];
    for (int i = 0; i < k; i++)
    {
        if (arr[i] >= s && arr[i])
            r++;
        else
            break;
    }

    cout << r << endl;

    return 0;
}