//#include <iostream>
////纯C语言
//void modify_num(int *b)
//{
//    *b+=1;
//}
//
//int main()
//{
//    int i=10;
//    modify_num(&i);
//    printf("after modify_num i=%d\n",i);
//    return 0;
//}
////E:\WangDao_C\ClionProject\text8\8.5-quote\cmake-build-debug\8.5-quote.exe
////after modify_num i=11
////
////进程已结束,退出代码0
////总结   编译效率慢

#include <iostream>
//C++
void modify_num(int &b)
{
    b+=1;
}
int main()
{
    int i=10;
    printf("after modify_num i=%d\n",i);
    return 0;
}
//E:\WangDao_C\ClionProject\text8\8.5-quote\cmake-build-debug\8.5-quote.exe
//after modify_num i=10
//
//进程已结束,退出代码0