#include<stdio.h>
main()
{
int sum_digit(int n);
int sum,n;
printf("enter the number\n");
scanf("%d",&n);
sum=sum_digit(n);
printf("sum of all the digits are=%d",sum);
}
int sum_digit(int n)
{
int dig,s=0;
while(n!=0)
{
dig=n%10;
s=s+dig;
n=n/10;
}
return(s);
}
