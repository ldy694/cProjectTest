//
//  main.c
//  CProjectTest
//
//  Created by 林兴栋 on 16/9/13.
//  Copyright © 2016年 林兴栋. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>
extern void printwo(void);
extern void printhree(void);
extern void prinfour(void);
extern double pow(double,double);
extern int a,b;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("当前类型占用长度:%lu,\n最小：%f,\n最大：%f,\n精度：%d\n",sizeof(float),FLT_MIN,FLT_MAX,FLT_DIG);
    int a = 0x1lu;
    int b = 1E1-2;
    double ccc = pow(a,b);
    printf("a+b=%d\n\a",a+b);
    printf("%d,%f\n",2^0,ccc);
    printwo();
    printhree();
    prinfour();
    return 0;
}