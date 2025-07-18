#include<stdio.h>
int power(int b,int p)
{
    if(p == 1)
        return b;
    int y=power(b,p/2);
    if(p%2 == 0)
        return y*y;
    else
        return b*y*y;
}

void main()
{
    int b,p,r;
    printf("Enter the base no:- ");
    scanf("%d",&b);
    printf("Enter the power:- ");
    scanf("%d",&p);
    r=power(b,p);
    printf("%d",r);
}