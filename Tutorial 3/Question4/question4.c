/*Question 4 Tutorial 3
**Carlos Fabregas
**Create 3 pointers for professor, student_ids, grades and allocate dynamic memory to them
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){

    char *professor = (char*)calloc(256, sizeof(char));
    int n;

    if( professor == NULL){
        printf("could not allocate memory for professor name \n");
        exit(1);
    }
    
    printf("Professor, What is your name?\n");
    scanf("%s", professor);
    printf("How many students are you marking?\n");
    scanf("%d",&n);

    int *student_ids = (int*)malloc(n*sizeof(int));
    int *grades = (int*)malloc(n*sizeof(int));

    free(student_ids);
    free(grades);
    free(professor);
}