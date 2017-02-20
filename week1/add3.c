#include<stdio.h>

int sum(int a,int b,int c)
{
    int d;
    d=a+b+c;
    return d;
}

int main()

{
    int a,b,c,d;
    printf("enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    d = sum(a,b,c);
    printf("sum is %d",d);
    return 0;
}
