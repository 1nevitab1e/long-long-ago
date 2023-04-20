#include<stdio.h>
#include<string.h>
char ac[501],bc[501];
int d[501],a[501],b[501];//d求和

int max(int a,int b)
{ 
   int mx;
    mx=a>b?a:b;
   return mx;
}

int main()
{
   scanf("%s %s",ac,bc);
    a[0]=strlen(ac);
    b[0]=strlen(bc);
    //换位
 for (int i=1;i<=a[0];i++) a[i]=ac[a[0]-i]-'0';
 for (int i=1;i<=b[0];i++) b[i]=bc[b[0]-i]-'0';

   for (int i=1;i<=max(a[0],b[0])+1;i++)
    {
      d[i]=a[i]+b[i];
      a[i+1]=(d[i]/10==1)?a[i+1]+1:a[i+1];
      d[i]%=10;
    }
   
   int i=max(a[0],b[0]);
   i=(d[max(a[0],b[0])+1]==0)?max(a[0],b[0]):max(a[0],b[0])+1;

   while (i!=0)
   {
     
     printf("%d",d[i]);
     i--;
   }

   return 0;
}