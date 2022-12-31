#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int
main(void)
{
    unsigned int t; cin >> t;
    while (t--)
    {
        unsigned long n, m; cin >> n >> m;
        string s; cin >> s;
        int arr[n], temp[n];

        for (int i = 0; i < n; i ++)
        {
            arr[i] = (s[i] == '0') ? 0 : 1;
        }
        bool state;
        int iters = (m > n) ? n : m;
        for (int j = 0; j < iters; j++)
        {
            for (int i = 0; i < n; i ++)
            {
                if (!i) {temp[i] = (arr[i] == 0 && arr[i+1] == 1) ? 1 : arr[i];continue;}
                if (i+1 == n) {temp[i] = (arr[i] == 0 && arr[i-1] == 1) ? 1 : arr[i]; continue;}
                temp[i] = (arr[i] == 0 && (arr[i+1] == 1 ^ arr[i-1] == 1)) ? 1 : arr[i];
            }
            state = true;
            for (int i = 0; i < n; i++)
            {
                if (state && arr[i] != temp[i])
                    state = false;
                arr[i] = temp[i];
            }
            if (state)
                break;
        }

        for (int i = 0; i < n; i++)
            cout << arr[i];
        cout << endl;
    }
    return 0;
}
