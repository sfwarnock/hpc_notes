//
//  main.c
//  sedgewick_sieveOfEratosthenes
//
//  Created by Warnock, Scott A on 4/26/21.
//  Copyright © 2021 Warnock, Scott A. All rights reserved.
//

#include <stdio.h>

#define N 1000

main()
{
    int i;
    int j;
    int a[N + 1];
    
    // This for loop sets the intial conditions of the array index positions.
    
    // For array index postion 1 = 0, int i =2; for all i's <= length of N; increment by 1.
        // array index position i = 1
            // a[0] = 0, a[1] = 0, a[2] = 1, ....
    for (a[1] = 0, i = 2; i <= N; i++)
        a[i] = 1;
    
    // This for loop controls the math which is used to find prime numbers
    
    // For index position two (a[2] = 1); j = N/2; increment j by 1.
        // For j = 2; j
    
    for (i = 2; j <= N/2; j++)
        for (j = 2; j <= N/i; j++)
            a[i * j] = 0;
    
    // This for loop controls the printing of all prime numbers:
    
    // For array[index number] starting at position 1; for all index postions <= to the length of N; increment by 1
        // if prime
            // print number
    
    for (i = 1; i <= N; i++)
        if (a[i])
            printf("%4d", i);
    printf("\n"); // print space between number
}
