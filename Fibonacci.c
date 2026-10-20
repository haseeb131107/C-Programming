#include<stdio.h>
int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int i;
    printf("Enter a Number:");
    scanf("%d",&i);
    printf("Fibonacci No.=%d\n",fibonacci(i));
    return 0;
}
