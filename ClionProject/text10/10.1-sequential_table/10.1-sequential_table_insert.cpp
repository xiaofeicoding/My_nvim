#include <iostream>
//顺序表的初始化和插入操作

#define MaxSize 50 //定义符号常量长度的初始定义
typedef int ElemType;//顺序表在存储其他数据类型的时候，可以快速的进行更改

//静态分配，这种方式是把数据存放在栈空间上的

//先定义结构体
typedef struct {
    ElemType date[MaxSize]; //顺序表的元素
    int length;//当前顺序表的长度
}SqTable; //顺序表的结构体的类型定义

bool TableInsert(SqTable &T,int loca,ElemType e){
    //第一步先判断插入的位置loca是否合法
//    //合法返回值
//    if(loca>=1 && loca<=T.length+1){
//        return true;
//    }
    //反过来写
    if (loca<1 || loca>T.length+1){
        return false;
    }

    if(T.length >= MaxSize)
    {
        return false;
    }
    //插入的原理是把后面的元素依次往后移动，空出位置来插入元素
    for (int j=T.length;j>=loca;j--)
    {
        T.date[j]=T.date[j-1];
    }
    T.date[loca-1]=e;//要插入的元素
    T.length++;//顺序表长度加1
    return true;
}

//打印顺序表
void PrintTable(SqTable T){
    int i;
    for (i = 0; i < T.length; i++) {
        printf("%3d",T.date[i]);//为了打印到同一行
    }
}


//顺序表的插入操作
int main(){
    SqTable T;//给顺序表取个名
    bool ret;//ret用来装函数的返回值，布尔型是ture && false（业界内常用ret来表示返回值）
    //手动放置元素
    T.date[0]=1;
    T.date[1]=2;
    T.date[2]=3;
    T.length=3;//设置长度
    //插入数组，要先写出插入的子函数
    ret=TableInsert(T,6,60);
    if(ret)
    {
        printf("insert sequential success\n");
        PrintTable(T);
    } else{
        printf("insert sequential falsed\n");

    }
    return 0;
}
//loca=2
//E:\WangDao_C\ClionProject\text10\10.1-sequential_table\cmake-build-debug\10.1-sequential_table.exe
//insert sequential success
//  1 60  2  3
//进程已结束,退出代码0

//loca=3
//E:\WangDao_C\ClionProject\text10\10.1-sequential_table\cmake-build-debug\10.1-sequential_table.exe
//insert sequential success
//  1  2 60  3
//进程已结束,退出代码0

//loca=6
//E:\WangDao_C\ClionProject\text10\10.1-sequential_table\cmake-build-debug\10.1-sequential_table.exe
//        insert sequential falsed
//
//进程已结束,退出代码0


