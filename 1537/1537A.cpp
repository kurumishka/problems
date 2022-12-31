#include <iostream>
typedef uint16_t us;
typedef int32_t uc;
typedef long int li;

using namespace std;

int
main(void)
{
    us t;
    uc n;
    li sum, temp;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {   cin >> temp;
            sum += temp;
        }

        if (sum == n)
            {cout << 0 << endl; continue;}

        else if (sum > n)
            {cout << sum-n << endl; continue;}

        else
            {cout << 1 << endl; continue;}
    }
    return 0;
}
