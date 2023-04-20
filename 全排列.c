#include<stdio.h>//太经典了
int a[10],flag[10],n;//建图，判断标记，行数
void  dfs(int j)
{
	int i;
	if(j>n)//输出条件
    { 
		for(i=1;i<=n;i++)
			printf("    %d",a[i]);
		printf("\n");
		return ;
	}
	 for(int i=1;i<=n;i++){
		if(flag[i]==0)
        {
			a[j]=i;
			flag[i]=1;//判断
			  dfs(j+1);//下一步	
			flag[i]=0;//清理判断标记


		}
	}
	return;

}
int main()
{
	scanf("%d",&n);
	dfs(1);
}