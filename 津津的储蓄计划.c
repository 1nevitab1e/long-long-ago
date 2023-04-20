#include<stdio.h>
int main()
{  
 int currency,deposit,cost,flag,month;
   flag=1;
 for (int i=1;i<=12;i++)
  {
    currency+=300;
     scanf("%d",&cost);
     getchar();
    currency-=cost;
    if(currency<0)
     {
        flag=0;
        month=-i;
        break;
     }
     deposit+=currency-currency%100;
     currency%=100;
  }
  if(flag==0) 
   {
    printf("%d",month);
   }
  else 
   {
    currency+=deposit*1.2;
    printf("%d",currency);
   }
 return 0;
}


