/*Tutorial 2 Question2
**Group 5
**Carlos Fabregas
**Creates an array of 5 double values and checks if the current value is less than greater than or equal to the previous value
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    double num[] = {1.2, 5.5, 2.1, 3.3, 3.3};
    int i;
    //iterates through all the values in the array.
    for(i =0; i<5; i++){

        //condition to check values in between the current and the next
       if(i > 0 && i < 5){

         if(num[i] > num[i-1])
         {
             printf("The current number (%f) is greater than the previous value (%f) \n", num[i] , num[i-1]);
         }
         else if(num[i] < num[i-1])
         {
             printf("The current number (%f) is less than the previous value(%f) \n", num[i], num[i-1]);
         }
         else{
             printf("both the current number and the previous number have the same value \n");
         }
       } 
    }

    return 0;
}