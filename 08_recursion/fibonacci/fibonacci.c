/*
 * ================================================================
 * File:        fibonacci.c
 * Author:      kyr0s-01
 * Date:      	2026-03-18
 * Description: This program is an example of how to implement
 * 		a recursive function in C to calculate
 * 		the first N numbers of the Fibonacci's sequence.
 * 					
 * 		For more info on "Recursion" check the readme file!
 * 		
 * ================================================================
 */

/* A Fibonacci's sequence always starts with 0 and 1,
 * every following number is the sum of the two previous numbers in the sequence:
 * example: 0, 1, (1+0), (1+1), (2+1), ... */

#include <stdio.h>
#include <stdlib.h>

/* Prototypes */

unsigned long long int fibonacci(int N);
int main(void) 
{
    
    /* Variables */
    int c; 
    int n;

    /* The program goes on until ^C character is not typed (ctrl + C or ctrl + D, based on the system) - c is a "flag" value */
    while (( c = getchar()) != EOF ) {
	
	
	printf("%s", "Hello! Please, insert a number N to start the program: \n");
	scanf("%d", &n);
	
	//unsigned long long is used instead of a simple int because it can store very large values
	unsigned long long int fibonacci_sequence = fibonacci(n);
    
	printf("Fibonacci(%d): %11llu\n", n, fibonacci_sequence);

    }

}


/* fibonacci implementation */
unsigned long long int fibonacci(int N)
{
    /* Base case */
    if( N == 0 || N == 1 ) {
	return N; 
    } /* Recursive case */ 
    else {
	return fibonacci( N - 1 ) + fibonacci( N - 2 );
    }
   
}

