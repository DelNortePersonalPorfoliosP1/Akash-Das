//
//  Pythagorus.c
//  Lab- Pythagorus Lives
//
//  Created by Das, Akash on 9/11/19.
//  Copyright © 2019 Das, Akash. All rights reserved.
//

#include "Pythagorus.h"
#include <math.h>
int pythagorus(void) {
    int a, b = 0 ;
    double Asquare ,Bsquare, Csquare, squareRoot ;
    // insert code here...
    printf("What is the length of side 1?\n");
    scanf("%d", &a);
    //asks about first side
    printf("What is the length of side 2?\n");
    scanf("%d", &b);
    //asks about second side
    Asquare = a*a ;
    //squares value of first side
    Bsquare = b*b ;
    //squares value of second side
    Csquare = Asquare+Bsquare ;
    //Sets value of c^2
    squareRoot =  sqrt(Csquare);
    //sqrts C^2
    printf("The first side's value is %d\n the second side's value is %d\n. A^2 is %lf\n  B^2 is %lf\n. %lf+%lf=%lf\n", a, b, Asquare, Bsquare, Asquare, Bsquare, Csquare) ;
    printf("Square root of %lf is %lf\n", Csquare, squareRoot);
    //prints value of c
    return 0;
}
