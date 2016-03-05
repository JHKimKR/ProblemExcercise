//
//  main.c
//  20160225_1Problem
//
//  Created by KimJongHan on 2016. 2. 25..
//  Copyright © 2016년 KimJongHan. All rights reserved.
//
/******************************************************
 This problem is to sum up the prime numbers of a input number.
 ******************************************************/

#include <stdio.h>

int main() {
    
    int num;
    
    int sum = 0;
    
    printf("Input the number!");
    
    scanf("%d", &num);
    
    for(int idx = 1; idx < num ; idx++)
    {
        if( (num % idx) == 0 )
            sum += idx;
        else
            continue;
    }
    
    printf("%d", sum);
    return 0;
}
