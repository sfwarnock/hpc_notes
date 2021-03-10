//
//  main.c
//  cprog-e1.4
//
//  Created by Warnock, Scott A on 3/10/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

main()
{
    float celsius, fahr;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper){
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%3.0f\t\t\t%3.2f\n", celsius, fahr);
        celsius += step;
    }
}
