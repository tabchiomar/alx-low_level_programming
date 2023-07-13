#include<stdio.h>
int main(void)
{

	/**
	 *  * main - Entry point
	 *   *
	 *    * Return: Always 0 (Success)
	 *     */

int a=sizeof(int);
int b=sizeof(long int);
int c=sizeof(long long int);
int d=sizeof(char);
int f=sizeof(float);

printf("Size of a char: %d byte(s)\n", d);
printf("Size of an int: %d byte(s)\n", a);
printf("Size of a long int: %d byte(s)\n", b);
printf("Size of a long long int: %d byte(s)\n", c);
printf("Size of a float: %d byte(s)\n", f);
	
return (0);
}
