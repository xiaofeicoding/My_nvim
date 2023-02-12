#include <stdio.h>

void modify_pointer(int* *p,int *q)//引用&必须和变量名紧邻
{
    *p=q;
}
//子函数内修改主函数的一级指针变量
int main()
{
    int *p=NULL;
    int i=10;
    int *q=&i;
    modify_pointer(&p,q);//相当于C++这里是&p
    printf("after modify_pointer *p=%d\n",*p);
    return 0;
}
//E:\WangDao_C\ClionProject\text8\8.7-secondary_pointer\cmake-build-debug\8.7-secondary_pointer.exe
//        after modify_pointer *p=10
//
//进程已结束,退出代码0