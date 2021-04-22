//
//  main.c
//  cprog_e1.5.2
//
//  Created by Warnock, Scott A on 4/22/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

/* Count characters in input; 1st version */

main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
