#include<stdio.h>
int main()
{
int a[100],i,j,n;
printf("Enter no. of rows:");
scanf("%d",&n);
printf("Enter the Elements:");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
    printf("Array=%d\n",a[i]);
}
return 0;
}
