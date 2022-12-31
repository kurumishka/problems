#include <iostream>
typedef unsigned short _t;
typedef unsigned int ui;
using namespace std;

int main(void)
{
    _t t;
    ui n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << ((n%4) ? "NO" : "YES") << endl;
    }
    return 0;
}