//
//  fharToCels.c
//  fahr_to_cels
//
//  Created by Warnock, Scott A on 3/9/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while ( fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t\t\t%3.2f\n", fahr, celsius);
        fahr += step;
    }
}
