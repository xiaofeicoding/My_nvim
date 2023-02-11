//#include <iostream>
//
//void modify_pointer(int *p,int *q)
//{
//    p=q;
//}
//
//int main()
//{
//    int *p=NULL;
//    int i=10;
//    int *q=&i;
//    modify_pointer(p,q);
//    printf("after modify_pointer *p=%d\n",*p);
//    return 0;
//}
////E:\WangDao_C\ClionProject\text8\8.6-modify_quote\cmake-build-debug\8.6-modify_num.exe
////
////进程已结束,退出代码-1073741819 (0xC0000005)
////输出结果是-1073741819 为负数就说名程序异常输出

#include <iostream>

void modify_pointer(int* &p,int *q)
{
    p=q;
}

int main()
{
    int *p=NULL;
    int i=10;
    int *q=&i;
    modify_pointer(p,q);
    printf("after modify_pointer *p=%d\n",*p);
    return 0;
}
//E:\WangDao_C\ClionProject\text8\8.6-modify_quote\cmake-build-debug\8.6-modify_num.exe
//        after modify_pointer *p=10
//
//进程已结束,退出代码0
