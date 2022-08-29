#include<stdio.h>
void swap(int*,int*);
int main()
{

int a=4;
int b=5;
int temp;
swap(&a,&b);
}
void swap(int*a,int*b)

{

    printf("before the swapping=%d %d\n",*a, *b);
    int  temp=*a;
    *a=*b;
    *b=temp;
    printf("after  swapping=%d %d\n",*a, *b);
}


