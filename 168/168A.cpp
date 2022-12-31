#include <iostream>
#include <math.h>
typedef double us;
using namespace std;
int main(void)
{
    us n, x, y;
    cin >> n >> x >> y;
    us c = (n / 100) * y;
    if (c <= x) cout << 0 << endl;
    else { cout << ceil(c) - x << endl;}

    return 0;
}
