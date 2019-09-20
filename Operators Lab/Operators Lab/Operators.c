//
//  Operators.c
//  Operators Lab
//
//  Created by Das, Akash on 9/18/19.
//  Copyright © 2019 Das, Akash. All rights reserved.
//

#include "Operators.h"
#include <math.h>
int Operators(void) {
    // insert code here...
    int count ;
    int Days, Hours, Remainder, Minutes, Seconds = 0;
    printf("Input a number of seconds\n");
    scanf("%d", &count) ;
    Days = count/86400;
    Remainder = count % 86400 ;
    Hours = Remainder/3600 ;
    Remainder = count % 3600;
    Minutes = Remainder/60;
    Seconds = Remainder%60;
    printf("That is %d days, %d hours, %d minutes and %d seconds\n", Days, Hours, Minutes, Seconds) ;
    return 0;
}
