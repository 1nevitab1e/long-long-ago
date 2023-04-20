#include<stdio.h>
int queenrow[15]/*每一行皇后的列数*/,col[15],lef[30],rig[30];//列和左对角线和右对角线,全局变量默认全是0，果然数组大一点就可以ac
int n;
int num;

void dfs(int r)//r==row
	{ 
	 if(r>n)    //输出数据
		{
           num++;
		   if(num<=3)//前三个数据
		   {
              for (int i=1;i<=n;i++)//输出数据
			  {
				printf("%d ",queenrow[i]);
			  }
			  printf("\n");
		   }
		   else return;
		}

	   for (int i=1;i<=n;i++)     //按列排
	    {   
           if(col[i]==0&&lef[r+i]==0&&rig[n+r-i]==0)  //判断边界
		   {
			  queenrow[r]=i;

               col[i]=1;
			   lef[r+i]=1;
			   rig[n+r-i]=1;

                dfs(r+1);//下一行

			   col[i]=0;
			   lef[r+i]=0;
			   rig[n+r-i]=0;
		   }
		}

	}

int main()
{ //球球你让我ac吧 =（
	  scanf("%d",&n);
      dfs(1);
	  printf("%d\n",num);
	return 0;
}
	
