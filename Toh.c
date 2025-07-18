#include<stdio.h>
void toh(int n,char source,char aux,char dest)
{
    if(n==1)
        printf("Move disk %d to %c to %c",n,source,dest);
    else{
        toh(n-1,source,dest,aux);
        printf("\n");
        printf("Move disk %d from %c to %c\n",n,source,dest);
        toh(n-1,dest,aux,source);
    }
}
void main()
{
    int n;
    printf("Enter the no. of disks:- ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}