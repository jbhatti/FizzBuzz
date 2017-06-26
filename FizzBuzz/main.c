//
//  main.c
//  FizzBuzz
//
//  Created by Jaison Bhatti on 2017-06-26.
//  Copyright © 2017 Jaison Bhatti. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    for (i = 1; i < 101; i++)
    {
        if (((i % 5) != 0) && ((i % 3) == 0)) { //determines if number is a multiple of 3 and not 5
            printf("i = Fizz\n");
        }
        else
        {
            if (((i % 5) == 0) && ((i % 3) != 0)) { //determines if number is a multiple of 5 and not 3
                printf("i = Buzz\n");
            }
            else
            {
                if (((i % 5) == 0) && ((i % 3) == 0)) { //determines if number is a multiple of 5 and 3
                    printf("i = FizzBuzz\n");
                }
                else
                {
                    printf("i = %d\n", i);
                }
            }
        }
    }
        
    return 0;
}


