#include <stdio.h>
typedef int uc;
uc max(uc a, uc b){return (a > b) ? a : b;}
using namespace std;

int main(void)
{
    uc a, b, n;
    scanf("%d %d", &a, &b);
    n = (6 - max(a,b)) + 1;
    if (n==6){printf("1/1");}
    else if (!(n%3)){printf("%d/2\n", n/3);}
    else if(!(n%2)){printf("%d/3", n/2);}
    else {printf("%d/6\n", n);}

    return 0;
}