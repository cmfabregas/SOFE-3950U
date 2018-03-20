#include <stdio.h>
#include <stdlib.h>

/*int* Add(int* a, int*b){
    
    int* c= (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return &c;
}*/

int Add(int a, int b){
    return a+b;
}
void PrintHello(char *name){
    printf("hello %s \n", name);
}

int main(){

   /* int a=2, b=4;
    printf("Address of a in main = %d \n" , &a);

    //call by reference
    int *pointr = Add(&a,&b);
    printf("Sum = %d \n", *pointr);
*/

    int c;

    int (*p)(int,int);
    p = &Add;
    c = (*p)(2,3);

    printf("%d \n", c);


    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("Carlos");

    return 0;
}   