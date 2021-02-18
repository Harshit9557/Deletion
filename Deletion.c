#include<stdio.h>
int main()
{
    int n,i,a[100],index;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the perspective values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Value of Index : ");
    scanf("%d",&index);
    for(i=index;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("Required Inserted Array is : ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
