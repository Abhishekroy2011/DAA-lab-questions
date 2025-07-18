#include<stdio.h>
int lsearch(int a[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==k)
            return (i+1);
        return -1;
}
int main()
{
    int a[10],n,i,k,p=-1;
    printf("Enter no. of elements:- ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter key elements: ");
    scanf("%d",&k);
    p=lsearch(a,n,k);
    if(p!=-1)
        printf("\nElements found in %d position :- ",p);
        else
            printf("\nElements not found.");
}