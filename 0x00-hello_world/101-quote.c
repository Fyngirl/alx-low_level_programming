/*
 * File: 101-quote.c
 * Auth: Ibiere
 */
#include <stdio.h>
#include <unistd.h>
/**
 * main -  Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 *followed by a new line, to the standard error.
 * Return: Always 1.
 */
int main(void)
{
fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
return (1);
}
