#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50

typedef int ElemType;
typedef struct LNode
{
    ElemType date;     //单链表的数据域
    struct LNode *next; //单链表的指针域
}LNode,*Linklist;

void list_head_insert(Linklist &L)//LinkList=LNode*
{
    L=(Linklist)malloc(sizeof (LNode) ); //为头指针申请空间或者说为头结点申请空间，头指针指向头结点
    L->next=NULL;
    ElemType x;
    scanf("%d", &x);
    LNode *s;
    while (x!=9999)
    {
        s=(Linklist) malloc(sizeof(LNode));
        s ->date =x;
        s ->next =L ->next;
        L ->next =s;
        scanf("%d",&x);
    }
}

void printf_list(Linklist L)
{
    L=L->next;
    while(L!=NULL){
        printf("%3d",L->date);
        L=L->next;
    }
    printf("\n");
}
int main()
{
    //第一步：定义单链表的头指针
    LNode* L; //L是单链表的头指针，是结构体的指针类型
    //头插入法，新建列表的 函数
    list_head_insert(L);
    printf_list(L);
    return 0;
}