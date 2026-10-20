#include<stdio.h>
void menu()
{
int n,j;
printf("Select your choice:");
printf("\n1.Add\n2.Sub\n3.Mul");
scanf("%d",&n);
switch(n)
{case 1:
add();
menu();
break;
case 2:
printf("Sub");
menu();
break;
default:
printf("Exit");
}
}

int add()
{
int a,b;
printf("Enter values");
scanf("%d%d",&a,&b);
printf("Sum is=%d",a+b);
return 0;
}


int main()
{
menu();
return 0;
}
