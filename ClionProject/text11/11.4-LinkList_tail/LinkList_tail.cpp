#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType date;
    struct LNode *next;
}LNode,*LinkList;

void list_tail_insert(LNode* &L){
    L=(LinkList) malloc(sizeof (LNode));
    L->next=NULL;
    ElemType x;
    LNode *s,*r=L;
    scanf("%d",&x);
    while(x!=9999){
        s=(LinkList) malloc(sizeof (LNode));
        s->date=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next =NULL;
}

void print_list(LNode* L){
    L=L->next;
    while(L!=NULL){
        printf("%3d",L->date);
        L=L->next;
    }
    printf("\n");
}
int main(){
    LinkList L;
    list_tail_insert(L);
    print_list(L);
    return 0;
}