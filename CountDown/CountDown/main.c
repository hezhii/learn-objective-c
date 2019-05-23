//
//  main.c
//  CountDown
//
//  Created by 何洲 on 2019/4/30.
//  Copyright © 2019 何洲. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(int argc, const char * argv[]) {
    printf("Where should I start counting?");
    char *input = readline(NULL);
    int count = atoi(input);
    for (int i = count; i>=0 ; i -= 3) {
        printf("%d\n", i);
        if(i % 5 == 0){
            printf("Found one!\n");
        }
    }
    return 0;
}
