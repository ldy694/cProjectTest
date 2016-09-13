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
//#include "second.c"
//#include "three.c"
//#include "four.c"
extern void printwo(void);
extern void printhree(void);
extern void prinfour(void);
extern int a,b;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("当前类型占用长度:%lu,\n最小：%f,\n最大：%f,\n精度：%d\n",sizeof(float),FLT_MAX,FLT_MAX,FLT_DIG);
//    int a = 1;
//    int b = 2;
    printf("%d\n",a+b);
    printf("%d\n",2^0);
    printwo();
    printhree();
    prinfour();
    return 0;
}