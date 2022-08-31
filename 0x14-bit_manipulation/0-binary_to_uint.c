#include <stdio.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b)
{
    /*Checking to see if pointer is not null*/
    int i = 0, power = 1;
    unsigned int sum = 0, error = 0;

    while(b[i] != '\0')
    {
        if(b[i] != '0' && b[i] != '1')
            return (error);
        i++;

    }
    i--;

    while(i >= 0)
    {
        if (b[i] == '1')
            sum += power;
        power *= 2;
        i--;
    }

    return (sum);
}
