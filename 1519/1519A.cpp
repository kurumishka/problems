#include<iostream>
typedef long long int li;
using namespace std;
void yes() {cout << "YES" << endl;}
void no() {cout << "NO" << endl;}
li max(li a, li b) {return (a > b) ? a : b;}
li min(li a, li b) {return (a > b) ? b : a;}

int main(void)
{
    li t, r, b, d, m, mi;
    cin >> t;
    while (t--)
    {
        cin >> r >> b >> d;
        mi = min(r,b);
        m = max(r,b) - mi;
        (m > (d*mi)) ? no() : yes();
    }
    return 0;
}
