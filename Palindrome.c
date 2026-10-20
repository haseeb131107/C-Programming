#include<stdio.h>
int main()
{
    int n,digit,temp,rev;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("The Number is Palindrome");
    }
    else
    {
        printf("The Number is not Palindrome");
    }
    return 0;
}
