#include <iostream>
#include <stdint.h>
using namespace std;

int main(void)
{
    uint16_t t;
    uint64_t n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n%2050) {cout << -1 << endl; continue;}
        uint64_t temp = (uint64_t)n/2050;
        uint64_t c = 0;
        while (temp / 10 || temp % 10)
        {
            c += temp % 10;
            temp /= 10;
        }
        cout << c << endl;
    }
    return 0;
}