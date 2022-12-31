#include <iostream>
typedef double d;
using namespace std;

int main(void)
{
    unsigned short t;
    d n;
    int c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        c = (int)((n-1)/2);
        cout << c+1 << endl;
    }
    return 0;
}
