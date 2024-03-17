#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int salary;
    char type;
    void increament(char type,int salary);
    scanf("%c",&type);
    scanf("%d",&salary);
    increament(type,salary);

}
void increament(char type,int salary)
{
    int inc;
    switch(type)
    {
        case 'A':if(salary>=50000&&salary<=150000)
        {
            if(salary>=50000&&salary<=80000)
            {
                inc=salary+salary*0.05;
            }
            else if(salary>=80000&&salary<=160000)
            {
                inc=salary+salary*0.04;
            }
            printf("%d",inc);
        }
            else
                printf("Invalid designation");
                break;
       case 'S':if(salary>=40000&&salary<=200000)
        {
            if(salary>=40000&&salary<=70000)
            {
                inc=salary+salary*0.03;
            }
            else if(salary>=70000&&salary<=100000)
            {
                inc=salary+salary*0.03;
            }
           else if(salary>=100000&&salary<=200000)
           {
               inc=salary+salary*0.05;
           }
            printf("%d",inc);
        }
            else
                printf("Invalid designation") ;
                break;
        case 'P':if(salary>=40000&&salary<=200000)
        {
            if(salary>=40000&&salary<=60000)
            {
                inc=salary+salary*0.05;
            }
            else if(salary>=60000&&salary<=100000)
            {
                inc=salary+salary*0.07;
            }
           else if(salary>=100000&&salary<=200000)
           {
               inc=salary+salary*0.09;
           }
            printf("%d",inc);
        }
            else
                printf("Invalid designation");
                break;
         default : printf("Invalid designation") ;
    }
}
