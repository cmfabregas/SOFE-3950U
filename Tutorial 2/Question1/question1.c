/*Question 1
**Group 5
**By: Carlos Fabregas
**Creates an array of 10 Integer Values from one to 10, has a loop that iterates through the array and prints it
*/
#include <stdio.h>
#include <stdlib.h>


int main(){

    //array initialization
    int array[10]= {1,2,3,4,5,6,7,8,9,10};
    int i;

    //for loop prints out the arrayer
    for(i=0; i < 10; i++)
    {
        printf( "%d ", array[i]); 
    }

}