#include <iostream>
using namespace std;

int
main(void)
{
    int t, temp, n, sum; cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        sum = 0;
        temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
            arr[i] = temp;
        }

        if (sum % n)
            { cout << -1 << endl; continue; }

        temp = sum/n;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > temp)
                sum += 1;
        }
        cout << sum << endl;
    }
    return 0;
}
