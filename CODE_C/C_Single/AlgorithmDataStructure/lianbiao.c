#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct stu
{
	int data; //数据
	struct stu *next; //指向下一节点的指针
}node;
 
node *creat(int n)//创建链表
{
    node *head,*p1,*p2;
    int i;
    head=p1=p2=(node *)malloc(sizeof(node));//创建节点
    for(i=0;i<n;i++)//利用for语句实现节点数目限制
    {
        if(p2->next!=NULL)
        {
			scanf("%d",&p1->data);
			p2->next=p1;//p2->next保存p1,p2指向最后一个节点
			p2=p1;
			p1=(node *)malloc(sizeof(node));//创建下一个节点
        }
    }
    p2->next=NULL;
    return head;
}
 
void print(node *head)//打印链表
{
    node *p=head;
    while(p!=NULL)//节点不为空
    {
        printf("%d\n",p->data);//输出节点
        p=p->next;//指向下一个节点
    }
}
 
node *search(node *head,int data)//查找数据
{
    node *p=head;
    for(;p!=NULL;p=p->next)//遍历整个链表
    {
        if(data==p->data)//对比数据
        printf("%3d,%3d\n",p,p->data);//输出地址和数据
    }
    return head;
}
 
node *insert(node *head,int n)//节点插入
{
	int n_1=1;
	node *p1=head,*p2;
	node *s=(node *)malloc(sizeof(node));//创建新节点
	printf("输入插入的数据:");
	scanf("%d",&s->data);
	while(n_1!=n)//对比节点
	{
		p2=p1;//p2保存p1位置
		p1=p1->next;//p1后移
		n_1++;//节点计数
	}
	if(n_1==n)
	{
		if(head==p1)//表头
		{
            s->next=head;//修改head和新节点指针关系
            head=s;
		}
		else//表间
		{
            s->next=p1;//修改新节点和p1,p2的指针关系
            p2->next=s;
		}
	}
	return head;
}
 
/*node *insert(node *head,int data)
{
	node *p1=head,*p2;
	node *s=(node *)malloc(sizeof(node));//创建新节点
	printf("输入插入的数据:");
	scanf("%d",&s->data);
	while(p1->data!=data)//对比数据域
	{
		p2=p1;//p2保存p1位置
		p1=p1->next;//p1后移
	}
	if(p1->data=data)
	{
		if(head==p1)//表头
		{
            s->next=head;//修改head和新节点指针关系
            head=s;
		}
		else//表间
		{
            s->next=p1;//修改新节点和p1,p2的指针关系
            p2->next=s;
		}
	}
	return head;
}*/
 
node *del(node *head,int n)//删除节点
{
    int n_1=1;
    node *p1=head,*p2=NULL;
    while(n_1!=n)//对比节点
	{
		p2=p1;//p2保存p1的位置
		p1=p1->next;//p1后移
		n_1++;//节点计数
	}
	if(n_1==n)
	{
		if(p1==head)//表头
		{
			head=p1->next;//head指向第二个节点,孤立表头
			free(p1);//释放孤立出来的节点(即从内存中删除)
		}
		else
		{
            p2->next=p1->next;//孤立出要删除的节点
            free(p1);//释放孤立出的节点(即要删除的节点)
		}
	}
	return head;
}
 
/*node *del(node *head,int data)
{
    node *p1=head,*p2;
    while(p1->data!=data)//对比数据域
	{
		p2=p1;//p2保存p1位置
		p1=p1->next;//p1后移
	}
	if(p1->data==data)
	{
		if(p1==head)//表头
		{
			head=p1->next;//head指向第二个节点,孤立表头
			free(p1);//释放孤立出来的节点(即从内存中删除)
		}
		else
		{
            p2->next=p1->next;//孤立出要删除的节点
            free(p1);//释放孤立出的节点(即要删除的节点)
		}
	}
	return head;
}*/
 
void del_a(node *head)//删除链表
{
    node *tmp,*p=head;
    while(p!=NULL)
    {
        tmp=p;//tmp保存d位置
        p=p->next;//p指向下一个节点
        free(tmp);//释放节点
    }
    head=NULL;
}
 
node *reverse(node *head)//逆序链表
{
    node *p1,*p2,*p3;
    if(head==NULL||head->next==NULL)
    return head;
    p2=head;//指向第一个节点
    p1=head->next;//指向第二个节点
    head->next=NULL;//第一个节点后继置空
    while(p1!=NULL)
    {
        p3=p2;//p3指向p2位置
        p2=p1;//p2指向p1位置
        p1=p1->next;//p1指向下一个节点
        p2->next=p3;//逆序节点
    }
    head=p2;//头指针指向逆序后的第一个节点
    return head;
}
 
/*node *reverse(node *head)
{
	node *p1,*p2,*p3;
	if(head == NULL || head->next == NULL)
    return head;
	p1=head;//指向第一个节点
	p2=head->next;//指向第二个节点
	head->next=NULL;
	while(p2!=NULL)
	{
		p3=p2->next;//将下一个节点保存下来
		p2->next=p1;//将当前节点的下一节点置为前节点
		p1=p2;//将当前节点保存为前一节点
		p2=p3;//将当前节点置为下一节点
	}
	head=p1;
	return head;
}*/
 
int main()
{
    int n,n1,n2;
    node *p,*p2;
    FILE *fp;
    fp=fopen("file.txt","w+");
    while(1)
    {
        printf("1 创建一个链表\t2 插入一个节点\t3 删除一个节点\t4 存储到文本file.txt\n");
        printf("5 删除整个链表\t6 查找数据\t7 逆序链表\t8 打印链表\n请输入数字执行对应操作：");
        scanf("%d",&n);
        switch(n)
        {
		case 1:
            printf("输入五个节点信息:\n");
            p=creat(5);
            printf("\n");
            print(p);
            break;
		case 2:
            printf("在哪个节点之前插入:");
            scanf("%d",&n1);
            p=insert(p,n1);
            printf("\n");
            print(p);
            break;
		case 3:
            printf("删除哪个节点:");
            scanf("%d",&n1);
            p=del(p,n1);
            printf("\n");
            print(p);
            break;
        case 4:
            printf("存储到文本file.txt\n");
            p2=p;
            for(;p2!=NULL;p2=p2->next)
            fprintf(fp,"%5d",p2->data);
            fclose(fp);
            break;
		case 5:
            printf("删除整个链表\n");
            del_a(p);
            break;
        case 6:
            printf("查找的数据：");
            scanf("%d",&n2);
            search(p,n2);
            break;
        case 7:
            printf("逆序链表\n");
            p=reverse(p);
            print(p);
            break;
        case 8:
            printf("输出链表\n");
            print(p);
            break;
 
        }
    }
 
}