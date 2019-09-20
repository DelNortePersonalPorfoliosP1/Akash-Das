//
//  Rectangle.c
//  Rectangle Lab
//
//  Created by Das, Akash on 9/19/19.
//  Copyright © 2019 Das, Akash. All rights reserved.
//

#include <stdio.h>
#include "Rectangle.h"
#include <math.h>
int Rectangle(void) {
    // insert code here...
    double l, w , Perimeter, Area ;
    printf("Input the width of the rectangle\n");
    scanf("%lf", &w) ;
    printf("Input the length of the rectangle\n");
    scanf("%lf", &l) ;
    printf("Your length is %lf and your width is %lf\n", l, w) ;
    Perimeter = 2*l +2*w ;
    Area = l*w ;
    printf("The perimeter of a rectangle with a length of %lf and width of %lf is %lf.\nThe Area is %lf\n", l, w, Perimeter, Area) ;
    return 0;
}
