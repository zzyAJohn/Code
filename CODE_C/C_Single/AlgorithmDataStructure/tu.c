#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
//--------------------图的邻接表存储表示-----------------------------------
typedef struct ANode      //边结点
{
    int adjvex;     //该边所指向的顶点的位置
    struct ANode *nextarc;        //指向下一条边的指针
}ANode,*ArcNode;
typedef struct VNode        //顶点信息
{
    int flag;       //访问标志
    char data;      //存储顶点信息，例如：名字
    ArcNode firstarc;      //指向第一条依附该结点的边的指针
}VNode,*VexNode;
//------------------------队列的存储表示--------------------
typedef struct
{
    int* base;
    int Front;
    int Rear;
}SqQueue;

void CreateUDG(VexNode *HNode);
int LocateVex(VexNode G,char g,int V);
void DFS_AL(VexNode G,int v);
void BFS(VexNode G,int v);
int InitQueue(SqQueue *Q);
int EnQueue(SqQueue *Q,int e);
int DeQueue(SqQueue *Q);
void BFS(VexNode G,int v);

int main()
{
    VexNode HNode;
    CreateUDG(&HNode);
    int v,w;
    printf("\n-------------------------------------------------\n深度优先遍历：\n");
    printf("请输入从第几个结点开始访问：");
    scanf("%d",&v);
    printf("遍历结果：");
    DFS_AL(HNode,v);
    printf("\n-------------------------------------------------\n广度优先遍历：\n");
    printf("请输入从第几个结点开始访问：");
    scanf("%d",&w);
    printf("遍历结果：");
    BFS(HNode,w);
    return 0;
}

/*作用：采用邻接表法表示法，创建无向图*/
void CreateUDG(VexNode *HNode)
{

    int vexnum,arcnum;
    printf("请输入总的顶点数和总的边数：");
    scanf("%d %d",&vexnum,&arcnum);
    getchar();
    *HNode=(VexNode)malloc(sizeof(VNode)*vexnum);
    int i,k;
    printf("请输入各顶点的data：");
    for(i=0;i<vexnum;i++)      //输入顶点值
    {
        scanf("%c",&(*HNode)[i].data);      //输入顶点信息
        (*HNode)[i].flag=false;
        (*HNode)[i].firstarc=NULL;      //初始化表头结点的指针域为NULL
    }
    printf("\n---------------------------------------------------------------\n");
    char g1,g2;   //用于存放每条边依附的两个顶点
    int a,b;
    ArcNode p1,p2;
    for(k=0;k<arcnum;k++)       //输入各边，构造邻接表
    {
        getchar();
        printf("请输入第%d条边依附的两个顶点：",k+1);
        scanf("%c%c",&g1,&g2);
        a=LocateVex(HNode[0],g1,vexnum);
        b=LocateVex(HNode[0],g2,vexnum);
        p1=(ArcNode)malloc(sizeof(ANode));      //生成一个新的边结点p1
        p1->adjvex=b;       //邻接点序号为a
        p1->nextarc=(*HNode)[a].firstarc;
        (*HNode)[a].firstarc=p1;        //将新结点p1插入顶点的表头部
        p2=(ArcNode)malloc(sizeof(ANode));      //生成一个新的边结点p1
        p2->adjvex=a;       //邻接点序号为a
        p2->nextarc=(*HNode)[b].firstarc;
        (*HNode)[b].firstarc=p2;        //将新结点p1插入顶点的表头部
    }
    return ;
}
//作用：根据结点名字确定结点的位置
int LocateVex(VexNode G,char g,int V)
{
    int i;
    for(i=0;i<V;i++)
    {
        if(G[i].data==g)
            return i;
    }
    return 0;
}


//深度优先遍历
void DFS_AL(VexNode G,int v)
{
    int w;
    ArcNode p;
    printf("%c",G[v].data);
    G[v].flag=true;
    p=G[v].firstarc;        //p指向v的边链表的第一个边结点
    while(p!=NULL)
    {
        w=p->adjvex;        //表示w是v的邻接点
        if(!G[w].flag) DFS_AL(G,w);     //如果w未访问，则递归调用函数
        p=p->nextarc;
    }
    return ;
}

//广度优先遍历
void BFS(VexNode G,int v)
{
    int m;
    ArcNode p;
    SqQueue Q;
    InitQueue(&Q);		//建立队列
    EnQueue(&Q,v);		//第一个访问结点入队
    while(Q.Front!=Q.Rear)
    {
        m=DeQueue(&Q);		//队伍第一个元素出队
        if(G[m].flag)		//如果未被访问输出，结点名字，并设置访问标志为false
        {
            printf("%c",G[m].data);
            G[m].flag=false;
        }
        p=G[m].firstarc;
        while(1)		//将所有与该结点邻接的结点入队
        {
            EnQueue(&Q,p->adjvex);
            if(p->nextarc)
                p=p->nextarc;
            else break;
        }
    }
}

int InitQueue(SqQueue *Q)
{//构造一个空的队列
    Q->base=(int*)malloc(sizeof(int)*20);       //为队列分配一个最大容量为10的空间
    if(!Q->base) exit -1;
    Q->Front=Q->Rear=0;
    return 0;
}
int EnQueue(SqQueue *Q,int e)
{//入队
    Q->base[Q->Rear]=e;
    Q->Rear=Q->Rear+1;
    return 0;
}
int DeQueue(SqQueue *Q)
{//出队
    int e;
    if(Q->Front==Q->Rear) return 0;
    e=Q->base[Q->Front];
    Q->Front=Q->Front+1;
    return e;
}
