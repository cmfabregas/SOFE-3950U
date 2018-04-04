/*Question 5 Tutorial 3
**Carlos Fabregas
**Building upon question 4 to create a marking system
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct grade{
    int student_id;
    int mark;
}grade;

void grade_students(struct grade *grades, int num_students){
    FILE *file;
    file = fopen("grades.txt", "w");
    double sum=0, mean, sum1=0, std=0;

    for(int n=0; n < num_students; n++){
        sum = sum + grades[n].mark;
    }

    mean = ceilf((sum/num_students)*100) / 100;
    
    printf("%f\n ", mean);


    for (int i = 0; i < num_students; i++){
        sum1 = sum1 + pow((grades[i].mark), 2);
    }
    std = ceilf((sum/num_students)*100) / 100;
    printf("%f\n" , std);


    fclose(file);
}



int main(void){

    char *professor = (char*)calloc(256, sizeof(char));
    int num_students=0;
    struct grade* grades;

    if(professor == NULL){
        printf("could not allocate memory for professor name \n");
        exit(1);
    }
    
    printf("Professor, What is your name?\n");
    scanf("%s", professor);
    printf("How many students are you marking?\n");
    scanf("%d", &num_students);

    grades = (struct grade *)malloc(num_students*sizeof(struct grade));

    if( grades == NULL){
        printf("could not allocate memory for struct \n");
        exit(1);
    }

    for(int n=0; n < num_students; n++)
    {   
        grades[n].student_id =0;
        grades[n].mark =0;   

        printf("Enter Student Number \n");
        scanf("%d", &grades[n].student_id);
        printf("Enter mark\n");
        scanf("%d",&grades[n].mark);
    }
    
    grade_students(grades, num_students);

    free(grades);
    free(professor);
}