//
//  main.c
//  BMICalc
//
//  Created by 何洲 on 2019/5/10.
//  Copyright © 2019 何洲. All rights reserved.
//

#include <stdio.h>

//struct Person {
//    float heightInMeters;
//    int weightInKilos;
//} tom;

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

int main(int argc, const char * argv[]) {
    Person tom;
    tom.heightInMeters = 1.7;
    tom.weightInKilos = 96;
    
//    struct Person aaron;
    Person aaron = {1.97, 84};
    Person *p = &aaron;
    
    printf("tom is %.2f meters tall\n", tom.heightInMeters);
    printf("tom weights %d kilograms\n", tom.weightInKilos);
    printf("aaron is %.2f meters tall\n", (*p).heightInMeters);
    printf("aaron weights %d kilograms\n", aaron.weightInKilos);
    printf("aaron is %.2f meters tall\n", p->heightInMeters);
    printf("aaron weights %d kilograms\n",  p->weightInKilos);
    return 0;
}
