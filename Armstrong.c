#include<stdio.h>
int main()
{
    int n,sum=0,digit,temp;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("It is an Armstrong No.");
    }
    else
    {
        printf("It is not an Armstrong No.");
    }
    return 0;
}
