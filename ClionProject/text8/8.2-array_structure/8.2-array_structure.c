#include <stdio.h>

struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};
int main() {
    int i;
    struct student sarr[30];
    for(i=0;i<3;i++)
        scanf("%d%s %c%d%f%s",&sarr[i].num,sarr[i].name,&sarr[i].sex,&sarr[i].age,&sarr[i].score,sarr[i].addr);
    for(i=0;i<3;i++)
        printf("%d %s %c %d %5.2f %s\n",sarr[i].num,sarr[i].name,sarr[i].sex,sarr[i].age,sarr[i].score,sarr[i].addr);
    return 0;
}
//E:\GitRepository\ClionProject\wangdao-basic_c\text8\8.2-array_structs\cmake-build-debug\8_2_array_structs.exe
//2021 xioafei M 27 92.55 tonglia
//2022 zhangxueying F 28 93.82 tongliao
//2023 xiaofei M 29 98.68 tongliao
//2021 xioafei M 27 92.55 tonglia
//2022 zhangxueying F 28 93.82 tongliao
//2023 xiaofei M 29 98.68 tongliao
//
//进程已结束,退出代码0