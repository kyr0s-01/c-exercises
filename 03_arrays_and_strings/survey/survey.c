/*
 * ====================================================================
 * File:        
 * Author:      survey.c
 * Date:      	2026-03-25
 * Description: this example uses array to summarize the results of
 *              a survey.
 * --------------------------------------------------------------------
 * 40 students are asked to evaluate the quality of food served in the
 * student's café in a scale from 1 to 10 (1 awful, 10 excellent).
 * Put the 40 responses in an integer array and summarize the results.
 * 
 * ====================================================================
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define RESPONSES_SIZE 40
 #define FREQUENCY_SIZE 10
 #define BUFFER_SIZE    50

 void randomize_array(unsigned int *array);
 void print_votes(unsigned int *votes_array);
 void evaluate_frequency(unsigned int *votes_array, unsigned int *frequency_array);
 void print_frequency(unsigned int *frequency_array);
 char* histogram(int frequency, char* buffer);
 int main(void)
 {
    srand(time(NULL)); // seed to generate random numbers
    unsigned int responses_array[RESPONSES_SIZE]    = {0};
    unsigned int frequency_array[FREQUENCY_SIZE]    = {0};
    

    randomize_array(responses_array);
    print_votes(responses_array);
    evaluate_frequency(responses_array, frequency_array);
    print_frequency(frequency_array);

    


 }

 /* Make each one of the 40 votes random */
 void randomize_array(unsigned int *array)
 {
    for(int i = 0; i < RESPONSES_SIZE; i++) {
        array[i] = 1 + rand() % 10;
    }
 }

 /* Print each vote on a table with 10 elements for row */
 void print_votes(unsigned int *votes_array)
 {
    int line_counter = 1;
    printf("%s\n", "VOTES: ");
    for(int i = 0; i < RESPONSES_SIZE; i++ ) {

        printf("%5d", votes_array[i]);

        if(line_counter == 10) {
            printf("\n");
            line_counter = 1;
        } else {
            line_counter++;
        } 
    }
 }

 /* Compute frequency for each vote and fill proper array with the values */
 void evaluate_frequency(unsigned int *votes_array, unsigned int *frequency_array)
 {
    for(int j = 0; j < FREQUENCY_SIZE; j++) {
        int counter = 0;
        /* checks every element of the array */
        for(int i = 0; i < RESPONSES_SIZE; i++) {
            /* count every occurence of each vote */
            if(votes_array[i] == ( j + 1 )) {
                counter++;
            } 
        }

        /* fill the frequency array */
        frequency_array[j] = counter;
    }  
 }

 /* Print the frequency of each vote with histogram */
 void print_frequency(unsigned int *frequency_array)
 {
    char buffer[BUFFER_SIZE] = {0};

    /* Print header */
    printf("%10s%10s%10s\n", "Vote", "Frequency", "Histogram");

    /* print values */
    for(int i = 0; i < FREQUENCY_SIZE; i++) {
        printf("%10d%10d%10s\n", i+1, frequency_array[i], histogram(frequency_array[i], buffer));
    }

 }

 /* Assemble string for visualizing the histogram */
 char* histogram(int frequency, char* buffer)
 {

    for(int i=0; i <= frequency; i++){
        if( i == frequency ) {
            buffer[i] = '\0';
        } else {
            buffer[i] = '*';
        }
    }

    return buffer;
    
 }