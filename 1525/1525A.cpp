#include <iostream>
typedef unsigned short UC;
using namespace std;

int
gcd(int, int);

int
main(void)
{   
    UC t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        UC e,w,c,g;
        e = n;
        w = 100-n;
        if (n == 100) c = 1;
        else
        {
            g = gcd(e,w);
            c = e/g+w/g;
        }
        cout << c << endl;
    }
    return 0;
}

int
gcd(int m, int n)
{
    if (m == 0) return n;
    if (n == 0) return m;
    if (n == m) return n;
    if (n == 1 || m == 1) return 1;
    if (!(m%2) && !(n%2)) return 2*gcd(m/2, n/2);
    if (!(m%2) && n%2) return gcd(m/2, n);
    if (m%2 && !(n%2)) return gcd(m, n/2);
    if (n%2 && m%2) return (n > m) ? gcd((n-m)/2, m) : gcd((m-n)/2, n);
    return 1;
}
