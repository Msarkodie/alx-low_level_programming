<<<<<<< HEAD
#ifndef BITWISE
#define BITWISE

int _putchar(char);
=======
#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h> /* NULL */

/* helper function */
int _putchar(char c);

/* function prototypes for all files */
>>>>>>> 1e511a7b45029006112be9b1ec3a4e71f8aa45e6
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif