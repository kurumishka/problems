#include <iostream>
#include <math.h>
using namespace std;

int
main(void)
{
    double n, m, a, k;
    cin >> n >> m >> a;
    long long int x = ceil(n/a);
    long long int y = ceil(m/a);
    cout << x*y << endl;

    return 0;
}
