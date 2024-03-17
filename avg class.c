#include<stdio.h>
main()
{
int i,n,m,sum=0;
float avg;
printf("enter the number of students\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the marks of the students\n");
scanf("%d",&m);
sum=sum+m;

}
avg=(float)sum/n;
printf("average of class is=%f\n",avg);
}
