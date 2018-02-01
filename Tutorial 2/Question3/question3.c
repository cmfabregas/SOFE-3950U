/*Question 3
**Group 5
**Carlos Fabregas
**Creates a char as a string and iterates through an infinite loop until it reaches the end
** Jan 29, 2018
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    char string[] = {'h','e', 'l', 'l','o', ' ', 'w' , 'o', 'r','l', 'd', '\0'};
    int i;
    
    //for loop with the condition that it has to end when the char is equal to 0
    for(i=0; string[i] != 0; i++){
        printf("%c", string[i]);
    }

    printf("\n"); 

    return 0; 
}