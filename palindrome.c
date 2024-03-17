#include<stdio.h>
main()
{
void palindrome(int n);
int palindromee,n;
printf("enter the number\n");
scanf("%d",&n);
palindrome(n);

}
void palindrome(int n)
{
int dig,rev=0,t=n;
while(n!=0)
{
dig=n%10;
rev=rev*10+dig;
n=n/10;
}
if(t==rev)
printf( "number is palindrome");
else
printf("the number is not palindrome");
}
