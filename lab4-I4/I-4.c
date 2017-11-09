#include<stdio.h>

void interchange(int *a,int *b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    interchange(a,b);
    printf("\n%d, %d", b,a);
    return 0;
}
