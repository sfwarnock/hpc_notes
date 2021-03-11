//
//  main.c
//  cprog_e1.5
//
//  Created by Warnock, Scott A on 3/11/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

main()
{
    printf("Fahrenheit\tCelsius\n");
    for (float fahr = 300; fahr >= 0; fahr -= 20)
        printf("\t%3.0f\t\t%3.2f\n", fahr, (5.0 / 9.0) * (fahr -32));
}
