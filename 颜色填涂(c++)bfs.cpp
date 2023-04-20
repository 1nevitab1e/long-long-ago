#include <bits/stdc++.h>
using namespace std;
struct zuobiao      //存坐标
{
    int x;
    int y;
}zuo;
#define M  31;   
int zuobiao1[M][M];//坐标的数值
int flag[M][M];//标识1,0,有无经过

int dx[4]={1,-1,0,0};//移动用数组
int dy[4]={0,0,-1,1};

int m ,n, a,b,c;
queue <zuobiao> q;     //定义一个类型为place的队列
void bfs(int x,int y)
{
    flag[x][y]=1;   //将传入的第一个点标记
    zuo.x=x;
    zuo.y=y;
    q.push(zuo);   //压入队列
    while(!q.empty())
    {
        struct place A=q.front();  // 获取队列中第一个元素
        q.pop();
        int zx,zy;
        for(int i=0;i<4;i++)
        {
            zx=A.x+dx[i];
            zy=A.y+dy[i];
            if(zx<0 || zx>n+1 || zy<0 || zy>n+1 || visited[zx][zy]==1 )
            	continue;            
            else
        	{
			        flag[zx][zy]=1;
        	        struct place B;                 
            	        B.x=zx;
            	        B.y=zy;
            	        q.push(B);         //压入队列
        	}
    	}
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>zuobiao1[i][j];
            if(zuobiao1[i][j]==0)  
                flag[i][j]=0;
            else 
                flag[i][j]=1;
        }
    }
 
    bfs(0,0);  //同上，从（0，0）开始是因为在外面加了一圈0
 
    for(int i = 1 ; i <= n ; i++)               
    {
        for(int j = 1 ; j <= n ; j++ )
        {
            if(!flag[i][j])    cout<<"2"<<" ";        //如果未被标记，这一定是闭合‘1’中的‘0’， 输出‘2’； 
            else     cout<<zuobiao1[i][j]<<" ";;
        }
        cout<<endl;
    } 
    return 0;
}