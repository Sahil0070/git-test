#include <stdio.h>
#include <conio.h>
int add(int a , int b )
{
    int c = a + b ;
    return c;
}
int main()
{
    int a, b;
    a = 10; 
    b = 30;
    int res = add(a , b);
    printf("%d", res);
    return 0;
}
