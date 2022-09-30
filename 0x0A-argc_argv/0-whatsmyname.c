#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}



