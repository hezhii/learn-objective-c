//
//  main.c
//  Addresses
//
//  Created by 何洲 on 2019/4/30.
//  Copyright © 2019 何洲. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    printf("this function starts at %p\n", main);
    printf("the int stored at addressOfI is %d\n", *addressOfI);
    *addressOfI = 89;
    printf("Now i is %d\n", *addressOfI);
    printf("An int is %zu bytes\n", sizeof(i));
    printf("An long is %zu bytes\n", sizeof(long));
    printf("An long long is %zu bytes\n", sizeof(long long));
    printf("A float is %zu bytes\n", sizeof(float));
    printf("A double is %zu bytes\n", sizeof(double));
    printf("A pointer is %zu bytes\n", sizeof(addressOfI));
    return 0;
}
