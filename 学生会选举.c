#include<stdio.h>//其实不要脸一点就可以直接打开<algorithm>然后ctrl+c&ctrl+v了 =），试着用快速排序，然后就超时间暴毙了
int a[1000],b;
int n ;
long long m;


int main()
{
  scanf("%d %lld",&n,&m);
  for(long long i=0;i<m;i++)
  {
    scanf("%d",&b);
    getchar();
     ++a[b];

  }
  for(int i=1;i<=n;i++)
  {
    while(a[i]--) printf("%d ",i);
  }
  return 0;
}

 



