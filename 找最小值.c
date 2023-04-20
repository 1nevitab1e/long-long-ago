#include<stdio.h>
int main()
{
  int n,a;
  int min=32767;
  scanf("%d",&n);
   getchar();
  for (int i=1;i<=n;i++)
  {
   scanf("%d",&a);
    getchar();
   if (a<min) min=a;
  }
   printf("%d",min);
  return 0;
}