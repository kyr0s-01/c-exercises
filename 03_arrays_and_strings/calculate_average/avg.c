/*
 * ====================================================================
 * File:        
 * Author:      avg.c
 * Date:      	2026-03-25
 * Description: This program implements the following function:
 *              calculate_avg -> calculates the average of N integers
 * ====================================================================
 */

 #include <stdio.h>

 float calculate_avg(int sum, int num);
 int main()
 {
    int flag = 0;
    int N;

    while(flag == 0) {
        int sum = 0;
        printf("%s", "How many numbers?\n");
        scanf("%d", &N);
        
        int array[N];
        printf("%s", "Enter each number: \n");
        for(int i=0; i<N; i++) {
            scanf("%d", &array[i]);
            sum += array[i];
        }

        printf("Sum: \t%11d\n", sum);
        printf("Average: \t%.2f\n", calculate_avg(sum, N));

    }

 }


 float calculate_avg(int sum, int num)
 {
    return (float) sum / num;
 }

 