#include <stdio.h>

struct student
{
    int num;
    char name[20];
    char sex;
};
int main()
{
    struct student s={2023,"xiaofei",'M'};
    struct student sarr[3]={2020,"zhangxueying",'F',2021,"zhangpang",'F',2022,"sipangzi",'f'};
    struct student *p;//定义结构体指针
    int num;
    p=&s;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    p=sarr;
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);//方式一获取成员
    printf("%d %s %c\n",p->num,p->name,p->sex);//方式二获取成员
    printf("--------------------------------\n");
    p+=1;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    return 0;
}
//E:\WangDao_C\ClionProject\text8\8.3-struct_pointer\cmake-build-debug\8.3-struct_pointer.exe
//2023 xiaofei M
//2020 zhangxueying F
//2020 zhangxueying F
//--------------------------------
//2021 zhangpang F
//
//进程已结束,退出代码0