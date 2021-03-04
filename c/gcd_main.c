//
//  main.c
//  gcd
//
//  Created by Warnock, Scott A on 3/1/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

int gcd(int u, int v) // u = 2, v = 6
    {
    int t;
    while (u > 0)
        {
        if (u < v) // 2 < 6
            { t = u; u = v; v = t;} // t = 2, u = 6, v = 2
        u = u - v; // u = 6 - 2
        }
    return v; // v = 4
    }

main()
    {
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
        if (x > 0 && y >0)
            printf("%d %d %d/n", x, y, gcd(x, y));

    }
