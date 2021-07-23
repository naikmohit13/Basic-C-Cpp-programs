#include<stdio.h>
void main()
{
    int a=7;
    float b=7.6;
    void *p;

    p=&a;
    printf("Integer value is=%d\n",*(int*)p);
    p=&b;
    printf("Float value is=%f\n",*(float*)p);
}
