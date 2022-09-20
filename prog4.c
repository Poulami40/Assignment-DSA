//Reverse array without extra variable
#include <stdio.h>
int main()
{
    int n,j=0,temp;
    printf("\nEnter size");
    scanf("%d",&n);
    int a[10],k=n-1;
    printf("\nEnter elements:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nArray is:\n");
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
    while(j<k)
    {
        temp=a[j];
        a[j]=a[k];
        a[k]=temp;
        j++;
        k--;
    }
    printf("\nReversed array is:\n");
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
}
