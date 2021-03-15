//
//  main.c
//  cprog_e1.6
//
//  Created by Warnock, Scott A on 3/15/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

/* copy input to output; test version */

main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
