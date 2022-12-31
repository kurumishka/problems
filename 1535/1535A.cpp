#include <iostream>
using namespace std;
void yes() {cout << "YES" << endl;}
void no() {cout << "NO" << endl;}
#define Y yes()
#define N no()

int main(void)
{
    unsigned int t, f, f_i, s, s_i;
    unsigned int temp1, temp2;
    cin >> t;
    while (t--)
    {
        unsigned int arr[4];
        f = s = f_i = s_i = 0;
        for (int i = 1; i <= 4; i++)
        {
            cin >> temp1;
            arr[i-1] = temp1;
            if (temp1 > f) {f=temp1; f_i=i;}
        }

        for (int i = 1; i <= 4; i++)
        {
            temp2 = arr[i-1];
            if (temp2 > s && temp2 != f)
                {s=temp2; s_i=i;}
        }
        
        if ((f_i <= 2 && s_i > 2) || (f_i > 2 && s_i <= 2))
            Y;
        else
            N;
    }
    return 0;
}