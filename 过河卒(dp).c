#include<stdio.h>
#define max 21
//都给了dp的tag了，不写dp不好意思了 ^>^
int ma_x[8]={-2,-2,-1,-1,1,1,2,2};
int ma_y[8]={1,-1,2,-2,2,-2,1,-1}; //马覆盖的位置，超过了不算
long long f[max][max];//f数组表示到当前位置的方案数
/*则显然有状态方程：f(i,j)=f(i-1,j)+f(i,j-1)*/
int place[max][max];//保存位置是否可以经过，可以为0，反之1
int n,m,x,y;

int main()
{
 scanf("%d %d %d %d",&n,&m,&x,&y);
   place[x][y]=1;

    for(int i=0;i<8;i++)
	 {
        if(x+ma_x[i]>=0&&y+ma_y[i]>=0) //棋盘内的点赋值1
        	      place[x+ma_x[i]][y+ma_y[i]]=1;
     }

 f[0][0]=1;//初始化方案
 
 //棋盘上和左边界方案数均1或0(碰见马的范围了)
    for (int i=1;i<=n;i++)
     {
      if (place[i][0]==1) break;
      f[i][0]=1;
     }

    for (int i=1;i<=m;i++)
     {
      if (place[0][i]==1) break;
      f[0][i]=1;
     }
 
  for (int i=1;i<=n;i++)
   {
    for(int j=1;j<=m;j++)
     {
      if(place[i][j]==0) f[i][j]=f[i-1][j]+f[i][j-1];
      else f[i][j]=0;
     }
   }
      printf("%lld",f[n][m]);
     return 0;
}