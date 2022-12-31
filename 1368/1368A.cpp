#include<iostream>
typedef unsigned short us;
typedef long long ll;
using namespace std;

int
main(void)
{
    us t; cin >> t;
    while (t--)
    {
        ll a, b, x; cin >> a >> b >> x;
        ll sum = 0;
        while (a <= x && b <= x)
        {

            if (a+b+a > a+b+b)
            {
                b+= a;
                sum++;
                continue;
            }
            else
            {
                a+=b;
                sum++;
                continue;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
