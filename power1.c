#include<stdio.h>
int power(int b,int p)
{
    if(p == 0)
        return 1;
    else
        return b*(power(b,p-1));
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