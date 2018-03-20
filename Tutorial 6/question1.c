#define _XOPEN_SOURCE 700 // required for barriers to work
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
<<<<<<< HEAD
int main(void)
{
    
    int x = 5; 
    int *p;
    p = &x;

    *p=6;

    printf("the address of a is %d , the value of a is %d \n", p, *p); //address in p
    

    int **q;
    q = &p;

    printf("the address of a is %d , the value of a is %d \n", q, *q);
    printf(" the value of a is %d \n", *(*q) );
    
    
    int ***r;
    r = &q;

=======

void readFile(int num){

    FILE *file = fopen("./child1.txt", "r");
    int c;
    if (file) {
        while ((c = getc(file)) != EOF)
          putchar(c);
            
        fclose(file);
    }

}


int main(void)
{
   
    FILE *fptr = fopen("./child1.txt", "w");
    if(fptr == NULL){
        printf("error!");
        exit(1);
    }

    fprintf(fptr, "%s", "child 1");
    
    FILE *fptr1 = fopen("./child2.txt", "w");
    if(fptr1 == NULL){
        printf("error!");
        exit(1);
    }

    fprintf(fptr1, "%s", "child 2"); 

    pid_t child1 = fork();
    pid_t child2 = fork();

    if(child1 == 0){
        printf("I am the child process \n");
        readFile(1);
    }

    if(child2 == 0){
        printf("I am the second child process \n)");
        readFile(2);
    }
>>>>>>> 7c7dcb3521ea7d10784406268209cd7be0e5b252

    
}