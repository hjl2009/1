#include<stdio.h>
#include<string.h>
void OrientedGraph(void);/**有向图函数 */

void UndirectedGraph(void);/**无向图函数 */

int main(void)
{
int n;
printf("0：有向图\n非0：无向图\n");
scanf("%d",&n);
if(n)
    UndirectedGraph();
else
    OrientedGraph();
}
void OrientedGraph(void)/**有向图函数 */
{
printf("开始生成有向图\n");
int n;
while(1){
printf("请输入图的节点数(须大于1)：\n");
scanf("%d",&n);
if(n>1)
    break;
        }
        printf("开始生成%d点有向图\n",n);
        int str[n][n];

int i=0,j=0,k=0;
for(;i<n;i++)
{
    for(;j<n;j++)
        str[i][j]=0;/**数组初始化*/
    printf("请输入由该节点(第%d个)出发的有向边指向的节点的序号(输入0退出)：\n",i+1);
    while(1)
    {
        printf("请输入目标节点的序号\n");
        scanf("%d",&j);
        if(j)
        str[i][j-1]=1;
        else
            break;
    }
}
/**输出矩阵*/
printf("输出邻接矩阵\n");
for(i=0;i<n;i++)
{printf("第%5d条边：",i+1);
    for(k=0;k<n;k++)
    {
        printf(" %d",str[i][k]);
    }
    printf("\n");
}
}
void UndirectedGraph(void)/**无向图函数 */
{
printf("开始生成无向图\n");
int n;
while(1){
printf("请输入图的节点数(须大于1)：\n");
scanf("%d",&n);
if(n>1)
    break;
        }
        printf("开始生成%d点无向图\n",n);
        int str[n][n];
int i=0,j=0,k=0;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    str[i][j]=0;/**数组初始化*/
for(i=0;i<n;i++)
{


    printf("请输入由该节点(第%d个)出发的边指向的节点的序号(输入0退出)：\n",i+1);
    while(1)
    {
        printf("请输入目标节点的序号\n");
        scanf("%d",&j);
        if(j){
        str[i][j-1]=1;
        str[j-1][i]=1;}
        else
            break;
    }
}
/**输出矩阵*/
printf("输出邻接矩阵\n");
for(i=0;i<n;i++)
{printf("第%5d条边：",i+1);
    for(k=0;k<n;k++)
    {
        printf(" %d",str[i][k]);
    }
    printf("\n");
}
}
