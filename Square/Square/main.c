//
//  main.c
//  Square
//
//  Created by 何洲 on 2019/4/30.
//  Copyright © 2019 何洲. All rights reserved.
//

#include <stdio.h>

int square(int a){
    return a * a;
}

int main(int argc, const char * argv[]) {
    int a = 5;
    int result = square(a);
    printf("\"%d\" squared is \"%d\".\n", a, result);
    return 0;
}
