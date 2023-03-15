#include <stdio.h>
#include <stdlib.h>


typedef int ElemType;
typedef struct LNode{
    ElemType date;
    struct LNode *next;
}LNode,*LinkList;

void list_tail_insert(LinkList &L){
    L=(LinkList)malloc(sizeof (LNode));
    ElemType x;
    LNode *s,*r=L;
    scanf("%d",&x);
    while(x != 9999){
        s = (LinkList) malloc(sizeof (LNode));
        s ->date = x;
        r ->next = s;
        r=s;
        scanf("%d",&x);
    }
    r ->next =NULL;
}

//按序号查找节点
LinkList GetElem(LinkList L,int search_pos){
    if (search_pos<0){
        return NULL;
    }
    int j=0;
    while(L && j<search_pos){
        L = L ->next;
        j++;
    }
    return L;
}
//打印生成的链表
void print_list(LinkList L){
    L = L ->next;
    while (L != NULL){
        printf("%3d",L ->date);
        L = L ->next;
    }
    printf("\n");
}
int main(){
    LinkList L,search; //单链表的结构体指针类型
    list_tail_insert(L);
    print_list(L);
    search= GetElem(L,0);
    if (search != NULL ){
        printf("succeeded in searching by serial number\n");
        printf("%d\n",search ->date);
    }
    return 0;
}