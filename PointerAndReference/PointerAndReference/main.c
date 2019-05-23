//
//  main.c
//  PointerAndReference
//
//  Created by 何洲 on 2019/5/15.
//  Copyright © 2019 何洲. All rights reserved.
//

#include <stdio.h>

//void testStr(char *str){
//    printf("str is %p\n", str);
//    printf("str is %s\n", str);
//    str = "surprise";
//    printf("str is %p\n", str);
//    printf("str is %s\n", str);
//}
//
//void testInt(int *num){
//    *num = *num + 1;
//    num = NULL;
//}
//
//int main(int argc, const char * argv[]) {
//    char *str = "Hello World";
//    testStr(str);
//    printf("str is %s\n", str);
//    printf("\n");
//
//    int num = 1;
//    printf("num is %p\n", &num);
//    testInt(&num);
//    printf("num is %d\n", num);
//    printf("num is %p\n", &num);
//    return 0;
//}

void testStr(char **str){
    printf("str is %p\n", *str);
    *str = "shen";
    
}

void testInt(int *num){
    *num = *num + 1;
    num = NULL;
}

int main(int argc, const char * argv[])
{
    char *str = "Hello World";
    printf("str is %p\n", str);
    testStr(&str);
    printf("str is %s\n", str);
    
    /*
     int num = 1;
     printf("num is %p\n", &num);
     testInt(&num);
     printf("num is %d\n", num);
     printf("num is %p\n", &num);*/
    return 0;
}
