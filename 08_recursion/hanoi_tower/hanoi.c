/*
 * ================================================================
 * File:        hanoi.c
 * Author:      kyr0s-01
 * Date:      	2026-03-21
 * Description: 
 * 
 * 		        For more info on "Recursion" check the readme file!
 * 		
 * ================================================================
 */

 #include <stdio.h>
 #include <stdlib.h>





 
 /* Prototypes */
 void move_towers(int disks, char source_pin, char dest_pin, char tmp_pin);
 int main() {
    
    printf("%s", "- *TOWER of HANOI* -\n"
           "PRESS ENTER to start!\n");
    getchar();

    while(1) {
        printf("%s", "Enter number of towers: ");
    }
    return 0;
}

 /* Move towers recursive */
 void move_towers(int disks, char source_pin, char dest_pin, char tmp_pin)
 {
    if( disks == 0 ) {
        return;
    } 

    move_towers(disks-1, source_pin, tmp_pin, dest_pin);
    printf("Disk: %d\t from pin %c to %c.\n", disks, source_pin, dest_pin);
    move_towers(disks-1, tmp_pin, dest_pin, source_pin);

 }