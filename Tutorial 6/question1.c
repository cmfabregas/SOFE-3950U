#define _XOPEN_SOURCE 700 // required for barriers to work
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
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


    
}