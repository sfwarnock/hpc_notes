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
    float f, speedupA, speedupG;
    
    lower = 1;
    upper = 2048;
    step = 2;
    f = .50;
    
    p = lower;
    printf("Nodes\t\tSpeedup-Strong\t\tSpeedup-Weak\n");
    while (p <= upper){
        speedupA = 1 / ((1 - f) + (f / p));
        speedupG = p + (1 - p) * f;
        printf("%d\t\t\t%3.4f\t\t\t\t%3.4f\n", p, speedupA, speedupG);
        p = p * step;
    }
    
}
