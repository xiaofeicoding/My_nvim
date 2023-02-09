#include <stdio.h>

struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};//结构体的声明，结尾要有分号
int main()
{
    struct student s={2023,"xiaofei",'M',29,98.35,"TONGLIAO"};
    printf("%d %s %c %d %5.2f %s\n",s.num,s.name,s.sex,s.age,s.score,s.addr);
    return 0;
}
//E:\WangDao_C\ClionProject\text8\8.1-struct\cmake-build-debug\8.1-struct.exe
//2023 xiaofei M 29 98.35 TONGLIAO
//
//进程已结束,退出代码0