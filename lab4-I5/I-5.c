#include <stdio.h>

int main()
{
    int i;
    for(i=2; i<=60; i+=2)
    {
        printf("%d,", i);
    }
    printf("\n");
    i=2;
    while(i<=60)
    {
        printf("%d,", i);
        i+=2;
    }
    i=2;
    printf("\n");
    do
    {
        printf("%d,", i);
        i+=2;
    }while(i<=60);
    return 0;
}
