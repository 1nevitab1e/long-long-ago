#include<stdio.h>
int main()
{  
 long long a=0,b=0;
 scanf("%lld",&a);
 while(a)
  {
   b=b*10+a%10;
   a/=10;
  }
  printf("%lld",b);
 

 return 0;
}


