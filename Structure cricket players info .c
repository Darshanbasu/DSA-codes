#include<stdio.h>
struct player
{
    char pname[20],natn[10];
    int odi_rank,runs;
    float bat_avg;

};
  struct player a1,a2,a3;
  main()
  {
      printf("Enter the cricket player info\n");
      printf("enter the player 1 info\n");
      scanf("%s%s%d%d%f",&a1.pname,&a1.natn,&a1.odi_rank,&a1.runs,&a1.bat_avg);

       printf("enter the player 2 info\n");
      scanf("%s%s%d%d%f",&a2.pname,&a2.natn,&a2.odi_rank,&a2.runs,&a2.bat_avg);

       printf("enter the player 3 info\n");
      scanf("%s%s%d%d%f",&a3.pname,&a3.natn,&a3.odi_rank,&a3.runs,&a3.bat_avg);

      printf("the batter having less batting avg is\n");

      if(a1.bat_avg<a2.bat_avg&&a1.bat_avg<a3.bat_avg)
      {
          printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",a1.pname,a1.natn,a1.odi_rank,a1.runs,a1.bat_avg);

      }
       else if(a2.bat_avg<a1.bat_avg&&a2.bat_avg<a3.bat_avg)
       {
              printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",a2.pname,a2.natn,a2.odi_rank,a2.runs,a2.bat_avg);
       }
       else if(a3.bat_avg<a1.bat_avg&&a3.bat_avg<a2.bat_avg)
       {
             printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",a3.pname,a3.natn,a3.odi_rank,a3.runs,a3.bat_avg);
       }

        printf("the batter having highest odi rank is\n");

       if(a1.odi_rank<a2.odi_rank&&a1.odi_rank<a3.odi_rank)
       {
          printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",a1.pname,a1.natn,a1.odi_rank,a1.runs,a1.bat_avg);
       }

       else if(a2.odi_rank<a1.odi_rank&&a2.odi_rank<a3.odi_rank)
       {
           printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",a2.pname,a2.natn,a2.odi_rank,a2.runs,a2.bat_avg);
       }
        else if(a3.odi_rank<a1.odi_rank&&a3.odi_rank<a2.odi_rank)
       {
           printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",a3.pname,a3.natn,a3.odi_rank,a3.runs,a3.bat_avg);
       }

  }
