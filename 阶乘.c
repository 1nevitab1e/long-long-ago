#include<stdio.h>
int a[100],b[100];//也就100位不到
int n;
int main()
{  
  int i,j;
  a[0]=b[0]=1;//初值
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    for(j=0;j<100;j++)//在乘法操作中，每位乘i，得到的数字再进位
     {
        b[j]*=i;
     }
    for (j=0;j<100;j++)//进位
     {
        if (b[j]>9)
         {
            b[j+1]+=b[j]/10;
            b[j]%=10;  
         }
     }

     for (j=0;j<100;j++)//加法
      {
        a[j]+=b[j];
        if (a[j]>9)
         {
            a[j+1]+=1;
            a[j]%=10;  
         }
      }
  }

 int x;
  for (i=100;i>=0&&a[i]==0;i--)
    {
     x=i;
    }

  for (j=x-1;j>=0;j--) printf("%d",a[j]);//这段的i和j如果设在全局变量就直接暴毙了，然后发现应该是变量优先级的问题
 return 0;
}


