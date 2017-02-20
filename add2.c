#include<stdio.h>

int sum(int a,int b);

int main()
{
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);

    c = sum(a,b);
    printf("sum is %d",c);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}
