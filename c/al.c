//
//  main.c
//  amdahls_law
//
//  Created by Warnock, Scott A on 6/29/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

main()
{
    int p, upper, lower, step;
    float f, speedup;
    
    lower = 0;
    upper = 32;
    step = 2;
    f = .75;
    
    p = lower;
    printf("Nodes\tSpeedup\n");
    while (p <= upper){
        speedup = 1 / ((1 - f) + (f / p));
        printf("%d\t\t%3.4f\n", p, speedup);
        p += step;
    }
    
}
