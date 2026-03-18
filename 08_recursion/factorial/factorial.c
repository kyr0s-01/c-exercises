
/*
 * ================================================================
 * File:        fibonacci.c
 * Author:      kyr0s-01
 * Date:      	2026-03-18
 * Description: This program is an example of how to implement
 * 		a recursive function in C to calculate
 * 		the factorial product of non negative integer..
 * 					
 * 		For more info on "Recursion" check the readme file!
 * 		
 * ================================================================
 */
#include <stdio.h>


/* Prototypes */

unsigned long long int factorial(int number);
int main(void) 
{
    
    /* Variables */
    int c; 
    int n;

    /* The program goes on until ^C character is not typed (ctrl + C or ctrl + D, based on the system) - c is a "flag" value */
    while (( c = getchar()) != EOF ) {
	
	
	printf("%s", "Hello! Please, insert an integer number (>=0) to start the program: \n");
	scanf("%d", &n);
	
	//unsigned long long is used instead of a simple int because it can store very large values
	unsigned long long int res = factorial(n);
    
	printf("Factorial:(%d): %11llu\n", n, factorial(n));

    }

}

unsigned long long int factorial(int number)
{
    /* Base case */
    if ( number <= 1 ) {
	return 1;
    } /* Recursive case */
       else {
	 return factorial( number - 1 ) * number;
       }

}
