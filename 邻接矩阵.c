#include<stdio.h>
#include<string.h>
void OrientedGraph(void);/**����ͼ���� */

void UndirectedGraph(void);/**����ͼ���� */

int main(void)
{
int n;
printf("0������ͼ\n��0������ͼ\n");
scanf("%d",&n);
if(n)
    UndirectedGraph();
else
    OrientedGraph();
}
void OrientedGraph(void)/**����ͼ���� */
{
printf("��ʼ��������ͼ\n");
int n;
while(1){
printf("������ͼ�Ľڵ���(�����1)��\n");
scanf("%d",&n);
if(n>1)
    break;
        }
        printf("��ʼ����%d������ͼ\n",n);
        int str[n][n];

int i=0,j=0,k=0;
for(;i<n;i++)
{
    for(;j<n;j++)
        str[i][j]=0;/**�����ʼ��*/
    printf("�������ɸýڵ�(��%d��)�����������ָ��Ľڵ�����(����0�˳�)��\n",i+1);
    while(1)
    {
        printf("������Ŀ��ڵ�����\n");
        scanf("%d",&j);
        if(j)
        str[i][j-1]=1;
        else
            break;
    }
}
/**�������*/
printf("����ڽӾ���\n");
for(i=0;i<n;i++)
{printf("��%5d���ߣ�",i+1);
    for(k=0;k<n;k++)
    {
        printf(" %d",str[i][k]);
    }
    printf("\n");
}
}
void UndirectedGraph(void)/**����ͼ���� */
{
printf("��ʼ��������ͼ\n");
int n;
while(1){
printf("������ͼ�Ľڵ���(�����1)��\n");
scanf("%d",&n);
if(n>1)
    break;
        }
        printf("��ʼ����%d������ͼ\n",n);
        int str[n][n];
int i=0,j=0,k=0;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    str[i][j]=0;/**�����ʼ��*/
for(i=0;i<n;i++)
{


    printf("�������ɸýڵ�(��%d��)�����ı�ָ��Ľڵ�����(����0�˳�)��\n",i+1);
    while(1)
    {
        printf("������Ŀ��ڵ�����\n");
        scanf("%d",&j);
        if(j){
        str[i][j-1]=1;
        str[j-1][i]=1;}
        else
            break;
    }
}
/**�������*/
printf("����ڽӾ���\n");
for(i=0;i<n;i++)
{printf("��%5d���ߣ�",i+1);
    for(k=0;k<n;k++)
    {
        printf(" %d",str[i][k]);
    }
    printf("\n");
}
}
