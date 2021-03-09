//
//  main.c
//  mi_to_km
//
//  Created by Warnock, Scott A on 3/8/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

main()
{
    float mile, kilometer;
    int lower, upper, step;
    
    lower = 0;
    upper = 100;
    step = 2;
    
    mile = lower;
    while ( mile <= upper){
        kilometer = mile * 1.60934;
        printf("%3.0f\t%4.1f\n", mile, kilometer);
        mile = mile + step;
    }
}
