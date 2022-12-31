#include <bits/stdc++.h>
typedef long long int lli;
typedef long long int ui;
typedef long long int ul;
using namespace std;


int
main(void)
{
    ui t; cin >> t;
    while (t--)
    {
        ui n; cin >> n;
        ui arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i+1;
        }

        ui temp;
        for (int i = 0; i < n; i+=2)
        {
            if (n%2 && i+1 == n)
            {
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
                break;
            }

            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
