#include <iostream>

//顺序表的定义
#define MaxSize 50 //定义线性表的长度
typedef int ElementType;
typedef struct{
    int length;//顺序表的长度命名
    ElementType date[MaxSize];//顺序表的元素
}SqTable;//顺序表的类型定义

bool TableInsert(SqTable &T,int loca,ElementType e){
    if (loca<1 || loca>T.length+1){
        return false;
    }
    if (T.length>=MaxSize){
        return false;
    }
    for (int j=T.length;j>=loca;j--){
        T.date[j]=T.date[j-1];//把j-1赋值给j
    }
    T.date[loca-1]=e;//放入要插入的元素
    T.length++;
    return true;
}

void PrintTable(SqTable T){
    int i;
    for(i=0;i<T.length;i++)
    {
        printf("%3d",T.date[i]);
    }
    printf("\n");
}


//删除顺序表中的元素
bool TableDelete(SqTable &T,int loca,ElementType &e){
    //判断删除的位置是否合法
    if(loca<1 || loca>T.length){
        return false;
    }
    e=T.date[loca-1];//获取顺序表中对应的元素，赋值给e
    int j;
    for(j=loca;j<T.length;j++){
        T.date[j-1]=T.date[j];
    }
    T.length--;
    return true;
}

int main(){
    SqTable T;//给顺序表取名
    bool ret;//用来装函数的返回值，布尔型是true或者false
    //手动放置元素
    T.date[0]=1;
    T.date[1]=2;
    T.date[2]=3;
    T.length=3;
    ret=TableInsert(T,1,60);
    if (ret){
        printf("insert SqTable success\n");
        PrintTable(T);
    } else{
        printf("insert SqTable failed\n");
    }
    printf("--------------------------------\n");
    ElementType del;
    ret=TableDelete(T,2,del);
    if(ret)
    {
        printf("delete SeTable success\n");
        printf("del element=%d\n",del);
        PrintTable(T);
    } else{
        printf("delete SqTable failed\n");
    }
    return 0;
}
//E:\WangDao_C\ClionProject\text10\10.2-sequentail_tabale_delete\cmake-build-debug\10.2-sequentail_tabale_delete.exe
//insert SqTable success
// 60  1  2  3
//--------------------------------
//delete SeTable success
//del element=1
// 60  2  3
//
//进程已结束,退出代码0