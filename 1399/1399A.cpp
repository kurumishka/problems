#include <bits/stdc++.h>
using namespace std;

#define loop(zero, v) for (int i = zero; i < v; i++)
#define all(x) x.begin(),x.end()

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;

        int arr[n];
        loop(0,n)
            cin >> arr[i];

        if (n == 1)
        {
            cout << "YES" << "\n";
            continue;
        }

        sort(arr, arr+n);
        bool state = true;
        loop(0,n-1)
        {
            if (abs(arr[i]-arr[i+1]) > 1)
            {
                state = false;
                break;
            }
        }
        if (state)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
