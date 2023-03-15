#include <stdio.h>
#include <stdlib.h>


typedef int ElemType;
typedef struct LNode{
    ElemType date;
    struct  LNode *next;
}LNode,*LinkList;

void list_tail_insert(LinkList &L){
    L=(LinkList)malloc(sizeof(LNode));
    ElemType x;
    LNode *s,*r=L;
    scanf("%d",&x);
    while (x!=9999){
        s=(LinkList)malloc(sizeof(LNode));
        s ->date =x;
        r ->next =s;
        r=s;
        scanf("%d",&x);
    }
    r ->next =NULL;
    return ;
}
//按值查找单链表
LinkList LocateElem(LinkList L,ElemType search_val){
    while (L){
        if(L ->date == search_val){
            return L;
        }
        L = L ->next;
    }
    return NULL;
}

void print_list(LinkList L){
    L = L->next;
    while (L != NULL){
        printf("%d",L ->date);
        L = L->next;
    }
    printf("\n");
}
int main(){
    LinkList L,search;
    list_tail_insert(L);
    print_list(L);
    search= LocateElem(L,6);
    if (L !=NULL){
        printf("search by value succeeded\n");
        printf("%d\n",search->date);
    }

    return 0;
}