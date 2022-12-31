#include <iostream>
using namespace std;
typedef unsigned int us;

int
main(void)
{
    us t, sum; cin >> t;
    sum = 0;
    while (t--)
    {
        us a,b,c;
        cin >> a >> b >> c;
        if (a+b+c >= 2) sum++;
    }
    cout << sum << endl;
    return 0;
}