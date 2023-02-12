#include <stdio.h>

typedef struct student
{
    int num;//学号
    char name[10];//姓名
    char sex;//性别
}stu;
int main()
{
    stu s;
    scanf("%d%s %c",&s.num,s.name,&s.sex);
    printf("%d %s %c\n",s.num,s.name,s.sex);
    return 0;
}
//E:\WangDao_C\ClionProject\OJ\14-structure\cmake-build-debug\14-structure.exe
//2023 xiaofei M
//2023 xiaofei M
//
//进程已结束,退出代码0