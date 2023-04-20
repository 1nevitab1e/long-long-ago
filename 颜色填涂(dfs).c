#include<stdio.h>
//不知道为什么bfs就是有问题所以选了dfs =）
//只要在外面围一圈那么就联通所有没有被包围的0了，经典图论操作
int flag[33][33],weizhi[33][33];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};//代表上下左右四个方向啦
int n,a,b;

void dfs(int x,int y)
{
  int i;
   if(x<0||x>n+1||y<0||y>n+1||flag[x][y]!=0) return; //判断边界
    flag[x][y]=1;//走通则数组标记
   for(int i=0;i<4;i++)
   {
    a=x+dx[i];
    b=y+dy[i];

    dfs(a,b);  //向四个方向搜索
   }
}

int main() //球球你让我ac吧 =（
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            scanf("%d",&weizhi[i][j]);//输入方阵
            getchar();
            if(weizhi[i][j]==0)  
                flag[i][j]=0;
            else 
                flag[i][j]=1;//如果方阵中原本的值就为1，则认为被标记
        }
    dfs(0,0);

    for (int i=1;i<=n;i++)
	{
        for (int j=1;j<=n;j++)
        {
              if(flag[i][j]==0)
                   printf("2 ");//如果没被标记,输出2
              else
                   printf("%d ",weizhi[i][j]);//剩余原样输出
        }
        printf("\n");
	}
}