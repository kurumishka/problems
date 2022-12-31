#include <iostream>
using namespace std;

int
main(void)
{
    int t, n, temp, max, min; cin >> t;
    while (t--)
    {
        cin >> n;
        int i1,i2;
        max = i1 = i2 = 0;
        min = 101;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp > max) {max = temp; i1 = i+1;}
            if (temp < min) {min = temp; i2 = i+1;}
        }

        int max_i = (i1 > i2) ? i1 : i2;
        int min_i = (i1 < i2) ? i1 : i2;
        int k = 0;

        if (min_i > n-max_i+1)
        {
            k += (n-max_i+1);
            n -= k;
            if (min_i > n-min_i+1)
                k += (n-min_i+1);
            else
                k += min_i;
        }
        else
        {
            k += min_i;
            n-=k;
            max_i -=k;
            if (n-max_i+1 < max_i)
                k += (n-max_i+1);
            else
                k += max_i;
        }
        cout << k << endl;
    }
    return 0;
}
