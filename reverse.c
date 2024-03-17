#include<stdio.h>
main()
{
int reverse(int n);
int reversee,n;
printf("enter the number\n");
scanf("%d",&n);
reversee=reverse(n);
printf("reverse of the number is=%d",reversee);
}
int reverse(int n)
{
int dig,rev=0;
while(n!=0)
{
dig=n%10;
rev=rev*10+dig;
n=n/10;
}
return(rev);
}
