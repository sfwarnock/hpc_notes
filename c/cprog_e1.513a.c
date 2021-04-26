//
//  main.c
//  cprog_e1.5.3a
//
//  Created by Warnock, Scott A on 4/26/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

main()
{
    int c, n1;
    
    n1 = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n1;
    printf("%d\n", n1);
}
