#include <bits/stdc++.h>
using namespace std;
#define loop(zero, v) for (int i = zero; i < v; i++)
int
main(void)
{
    int n; cin >> n;
    int arr[n];

    loop(0,n)
        cin >> arr[i];

    int temp, max;
    temp = max = 1;
    loop(0, n-1)
    {
        if (arr[i] <= arr[i+1])
            temp++;
        else
            temp = 1;

        if (temp > max)
            max = temp;
    }
    cout << max << "\n";

    return 0; 
}
