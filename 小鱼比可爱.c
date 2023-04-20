#include<stdio.h>
int a[101];
int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    getchar();
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    printf("0 ");
    for (int i=2;i<=n;i++)
     {
        for (int j=1;j<i;j++)
         {
            if(a[j]<a[i]) count++;
         }
       
         printf("%d ",count);
		   count=0;
     }
   return 0;
}
