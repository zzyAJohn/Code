#include "stdio.h"
#include "malloc.h"

struct soldier
{
    int age;
    struct soldier*next;
};

int main()
{
    int age=0;
    int i=0;
    struct soldier *p=NULL,*head=NULL,*pass=NULL;
    //录入10个士兵的年龄
    for(i=0;i<10;i++)
    {
        printf("新兵报到，请输入年龄：");
        scanf("%d",&age);
        p=(struct soldier *) malloc(sizeof (struct soldier));
        if(p!=NULL)
        {
            p->age=age;
            p->next=NULL;
            if(i==0)
            {
                head=pass=p;
            }else{
                pass->next=p;
                pass=p;
            }
            p=NULL;
        }
    }
    while(head!=NULL)
    {
        printf("%d\t",head->age);
        head=head->next;
    }
}
