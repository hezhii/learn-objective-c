//
//  main.c
//  Turky
//
//  Created by 何洲 on 2019/4/29.
//  Copyright © 2019 何洲. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float weight;
    weight = 14.2;
    printf("The turkey weight %f.\n", weight);
    float cookingTime;
    cookingTime = 15.0 + 15.0 * weight;
    printf("Cook it for %f minutes.\n", cookingTime);
    
    // 练习
    float a = 3.14;
    float b = 42.0;
    double result = a + b;
    printf("The result is %f.\n", result);
    
    // 函数结束，返回 0 表示成功
    return 0;
}
