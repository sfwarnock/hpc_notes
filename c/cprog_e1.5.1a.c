//
//  main.c
//  cprog_e1.5.1a
//
//  Created by Warnock, Scott A on 4/19/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>


main()
{
    int c;
    
    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}
