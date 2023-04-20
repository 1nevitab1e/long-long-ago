#include<stdio.h>
int a[21][21];
int main()
 {
   int n;
   int i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++) a[i][1]=a[i][i]=1;
    for (i=1;i<=n;i++)
     {
        for(j=2;j<=i;j++)
         {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
         }
     }
     	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
         {
           printf("%d ",a[i][j]);
         }
		printf("\n");
	}
   return 0;
 }
