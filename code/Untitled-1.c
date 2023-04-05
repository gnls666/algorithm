#include<stdio.h>
int main()
{
    //我想写一个链表逆转的程序
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int *p;
    p=a;
    for(i=0;i<10;i++)
    {
        printf("%d",*(p+i)); //这里是输出数组的值
    }
    printf("Hello world!");
    return 0;
}

