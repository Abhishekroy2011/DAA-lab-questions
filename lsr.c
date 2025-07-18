#include<stdio.h>
int lsearch(int a[],int k,int n,int i)
{
    if(i>=n)
        return -1;

    if(a[i]==k)
        return i;

    else
        return(lsearch(a,n,k,i+1));    
}
int main()
{
    int a[10],k,i,p=-1,n;
    printf("Enter the no. of elements:- ");
    scanf("%d",&n);
    printf("Enter the elements:- ");
    for(i=1;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the key elements:- ");
    scanf("%d",&k);
    p=lsearch(a,n,k,0);
    if(p!=-1)
        printf("\nElements found in position: %d",p);
    else
        printf("\nElements not found....");

}