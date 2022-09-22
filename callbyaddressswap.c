#include <stdio.h>
void swap(int *a, int *b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("after swap:");
    printf("%d %d\n",*a,*b);
}

int main(int argc, char const *argv[])
{
    int a,b;
    a = 23;
    b = 48;
    printf("before swap:");
    printf("%d %d\n",a , b);
    swap(&a,&b);
    return 0;
}
