#include <stdio.h>

typedef struct student
{
    int num;
    char name[20];
    char sex;
}stu,*pstu;

typedef int INTEGER; //typedef关键字相当于把int类型用INTEGER这个单词来代替
int main()
{
    stu s={2023,"xioafei",'M'};
    pstu p;//定义了一个结构体指针变量
    INTEGER i=10;//定义了一个结构体指针变量
    p=&s;
    printf("i=%d,p->num=%d\n",i,p->num);
    return 0;
}
//E:\WangDao_C\ClionProject\text8\8.4-typedef\cmake-build-debug\8.4-typedef.exe
//i=10,p->num=2023
//
//进程已结束,退出代码0