//
//  main.c
//  cprog_e1.4.1
//
//  Created by Warnock, Scott A on 3/10/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

main()
{
    float fahr, kelv, celsius;
    int upper, lower, step;
    
    upper = 300;
    lower = 0;
    step = 20;
    
    fahr = lower;
    printf("Fahrenhiet\tCelsius\t\tKelvin\n");
    while (fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        kelv = celsius + 273.0;
        printf("\t%3.0f\t\t%3.2f\t\t%3.2f\n", fahr, celsius, kelv);
        fahr += step;
    }
}
