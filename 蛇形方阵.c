#include<stdio.h>
int a[20][20];
int main()//这好像dfs啊
{  
    int n;
      int m=1;//搞不明白为什么m=0就会暴毙
  int x=1,y=0;//一遍遍的debug出来的最佳坐标
   scanf("%d",&n);
while(m<=n*n)
{
		while(y<n&&!a[x][y+1])a[x][++y]=m++;
		 
		while(x<n&&!a[x+1][y])a[++x][y]=m++;

		while(y>1&&!a[x][y-1])a[x][--y]=m++;
		
		while(x>1&&!a[x-1][y])a[--x][y]=m++;
}

	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++) printf("%3d",a[i][j]);
		printf("\n");	
	}
 return 0;
}


