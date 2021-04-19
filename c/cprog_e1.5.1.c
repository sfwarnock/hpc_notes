//
//  main.c
//  cprog_e1.5.1
//
//  Created by Warnock, Scott A on 3/12/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main(){
    printf("Fahrenheit\tCelsius\n");
    for(float fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("\t%3.0f\t\t%3.1f\n", fahr, (5.0 / 9.0) * (fahr -32));
}
