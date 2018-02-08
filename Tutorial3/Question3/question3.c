/*Tutorial 3 Question 3
**Group 5
**By: Carlos Fabregas
** Creates a struct called student which attributes are studentid, age and year. Asks the user to enter these attributes, 
** then saves these attributes in a text file called student.txt
*/

#include <stdio.h>
#include <stdlib.h>

//student struct
typedef struct student{
    int studentid;
    int age;
    int year;
}student;

void save_student(struct student *records);

int main(void){
    
    struct student record;

    printf("Enter the students studentID: ");
    scanf("%d", &record.studentid);

    printf("Enter the Students age: ");
    scanf("%d", &record.age);

    printf("Enter the students starting year ");
    scanf("%d", &record.year);


    save_student(&record);
}

void save_student(struct student *records){
    
    FILE *file;

    file = fopen("student.txt", "a");
    
     if(file == NULL){
        printf("Error Opening File");
        
        exit(1);
    }

     fprintf(file, "%d, %d, %d, \n", records->studentid, records->age, records->year);

    fclose(file);
    
}



