//
//  main.c
//  menu
//
//  Created by Das, Akash on 9/20/19.
//  Copyright © 2019 Das, Akash. All rights reserved.
//

#include <stdio.h>
#include "menu.h"
#include "Pythagorus.h"
#include "Temp.h"
#include "Operators.h"
#include "Rectangle.h"
int main(void) {
    // insert code here...
    int choice = 0;
    menu();
    scanf("%d", &choice) ;
    if (choice == 1) { ;
        pythagorus() ;
    }
    if (choice == 2) { ;
        Temp() ;
    }
    if (choice == 3) { ;
        Rectangle() ;
    }
    if (choice == 4) {;
        Operators() ;
    }
    if (choice > 4, choice < 1){ ;
        printf("Start again\n") ;
    }
    return 0;
}
