#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*基础数据类型*/
    int a = 0;
    long b = 0;
    //定义变量（任意类型）记得初始化
    /*指针类型：*/
    int *p = NULL;
    
    //指针的使用:指针内存放的是某变量地址
    a = 5;
    p = &a;

    printf("a:%d\n",a);
    printf("&a:%p\n",&a);
    printf("*p:%d\n",*p);
    printf("p:%p\n",p);
    printf("&p:%p\n",&p);
    printf("*(&a):%d\n",*(&a));

    // int *ptr = &p; 不对
    // printf("ptr:%p\n",ptr);
    
    /*二级指针*/
    int **ptr = &p;
    printf("ptr:%p\n",ptr);
    printf("*ptr:%p\n",*ptr);
    printf("**ptr:%d\n",**ptr);
    printf("&ptr:%p\n",&ptr);

    /*三级指针*/
    int ***pptr = &ptr;
    printf("pptr:%p\n",pptr);  //获取的是二级指针的地址
    printf("*pptr:%p\n",*pptr); //获取的是二级指针的值，也就是二级指针里面存放的一级指针的地址
    printf("**pptr:%p\n",**pptr); //获取一级指针的值，也就是一级指针里面存放的a的地址
    printf("***pptr:%d\n",***pptr); //获取a的值

    return 0;
}