//
//  main.c
//  cprog_exer1.6
//
//  Created by Warnock, Scott A on 4/19/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

/* Verify that the expression getchar() != EOF is 0 or 1*/

#include <stdio.h>

main()
{
    int c;
    
    while ((c = getchar()) != EOF)
        printf(getchar() != EOF);
}
