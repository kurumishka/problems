#include <bits/stdc++.h>
using namespace std;
typedef unsigned int ui;
typedef vector<short> vs;

#define loop(zero, v) for (int i = zero; i < v; i++)

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ui t; cin >> t;
    while (t--)
    {
        short n, max, temp; cin >> n;
        int max_i, min_i;
        short min = 51;
        max = 0;
        vs arr;
        loop(0, n)
        {
            cin >> temp;
            if (temp >= max) { max = temp; max_i = i; }
            if (temp < min) { min = temp; min_i = i; }
            arr.push_back(temp);
        }

        bool sorted = true;
        loop(0, n)
        {
            if (i+1 != n && arr[i] <= arr[i+1])
            {
                continue;
            }
            else if (i+1 == n && arr[i] >= arr[i-1])
                break;
            else
            {
                sorted = false;
                break;
            }
        }

        if (sorted)
            {cout << 0 << "\n"; continue; }

        if (max_i == 0 && min_i == n-1)
            cout << 3 << "\n";

        else if (max_i == n-1 || min_i == 0)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }
    return 0;
}
