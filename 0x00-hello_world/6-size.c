#include <stdio.h>
/**
 * main-Entrypoint to the program
 * Descriptio:'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %zu bytes(s)\n",sizeof(a));
printf("Size of an int: %zu bytes(s)\n",sizeof(b));		
printf("Size of a long int: %zu bytes(s)\n",sizeof(c));
printf("Size of a long long int: %zu bytes(s)\n",sizeof(d));	
printf("Size of a float: %zu bytes(s)\n",sizeof(e));
return (0);
}
