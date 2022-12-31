#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = s[i]+'0';
        arr2[i] = s[i+n]+'0';
    }

    sort(arr1, arr1+n);
    sort(arr2, arr2+n);

    bool good = true;

    bool higher = false;
    bool lower = false;

    for (int i = 0; i < n; i++)
    {
        if (!i && arr1[i] > arr2[i])
        {
            higher = true;
            continue;
        }
        else if (!i && arr1[i] < arr2[i])
        {
            lower = true;
            continue;
        }
        else if (!i)
            {cout << "NO" << "\n"; return 0;}

        if ((higher && arr1[i] <= arr2[i]) || (lower && arr1[i] >= arr2[i]))
        {
            good = false;
            break;
        }
    }

    if (!good)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
    return 0;

}
