#include<iostream>
typedef long long int ll;
typedef unsigned int ui;
using namespace std;

void no(){cout << "NO"<<endl;}
void yes(){cout << "YES"<<endl;}
void ans(ll x, ll y, ll z)
{ yes(); cout << x << " " << y << " " << z << endl;}

int main(void)
{
    ui t;
    ll a, b, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b == 1) {no();continue;}
        x = a*b*2;
        y = a*b*2-a;
        z = a;
        ans(y,z, x);
    }
    return 0;
}
