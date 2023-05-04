#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *n);
void print_binary(unsigned long int b);
int get_bit(unsigned long int b, unsigned int index);
int set_bit(unsigned long int *b, unsigned int index);
int clear_bit(unsigned long int *b, unsigned int index);
unsigned int flip_bits(unsigned long int b, unsigned long int c);
int get_endianness(void);
int _atoi(const char *r);

#endif /* MAIN_H */
