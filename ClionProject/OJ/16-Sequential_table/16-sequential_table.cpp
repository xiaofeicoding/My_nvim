#include <iostream>

#define Maxsize 50

typedef int ElementType;

typedef struct {
    ElementType date[Maxsize];
    int length;
}SqList;

void ListInsert(SqList &L,int location,ElementType InsertValu){
    if(location<1 || location>L.length+1){
        return;
    }
    if(L.length>=Maxsize){
        return;
    }
    int j;
    for (j = L.length; j>=location; j--) {
        L.date[j]=L.date[j-1];
    }
    L.date[location-1]=InsertValu;
    L.length++;
}

void PrintfList(SqList L){
    int i;
    for(i=0;i<L.length;i++){
        printf("%3d",L.date[i]);
    }
    printf("\n");
}


int main()
{
    SqList L;
    L.date[0]=1;
    L.date[1]=2;
    L.date[2]=3;
    L.length=3;
    ElementType InsertValu;
    //读取要插入的元素
    scanf("%d",&InsertValu);
    ListInsert(L,3,InsertValu);//插入的元素
    PrintfList(L);
    return 0;
}



