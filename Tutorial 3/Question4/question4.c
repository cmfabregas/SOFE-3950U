<<<<<<< HEAD
/*Question 4 Tutorial 4
**Carlos Fabregas
**Create 3 pointers for professor, student_ids, grades and allocate dynamic memory to them
*/

=======
>>>>>>> 7c7dcb3521ea7d10784406268209cd7be0e5b252
#include <stdlib.h>
#include <stdio.h>


<<<<<<< HEAD

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

=======
int main(void){

    char *professor;
    int *student_ids;
    int *grades;

    professor  = (char*)calloc(256, sizeof(char));



    return 0;
>>>>>>> 7c7dcb3521ea7d10784406268209cd7be0e5b252
}