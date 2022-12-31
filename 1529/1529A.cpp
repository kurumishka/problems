#include <iostream>
using namespace std;
typedef unsigned short US;

int
main(void)
{
    US t; cin >> t;
    US n;
    while (t--)
    {
        cin >> n;
        US arr[n], min, temp;
        min = 101;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr[i] = temp;
            if (temp < min) min = temp;
        }

        US c = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == min) c++;
        }
        cout << n-c << endl;
    }
    return 0;
}
