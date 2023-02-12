#include <stdio.h>
#include <stdlib.h>

void modify_pointer(char *&p)//当子函数需需要修改主函数中的p，那么就加引用
{
    p=(char*) malloc(100);
    fgets(p,100,stdin);//stdin代表标准输入，fgets是安全的
}

int main()
{
    char *p=NULL;
    modify_pointer(p);
    puts(p);
    free(p);
    return 0;
}
//E:\WangDao_C\ClionProject\OJ\15-quote_homework\cmake-build-debug\15-quote_homework.exe
//I love C language
//I love C language
//
//
//进程已结束,退出代码0
