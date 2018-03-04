#define _XOPEN_SOURCE 600 // required for barriers to work
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <pthread.h>
#include <unistd.h>



void *hello_world(){
    
    srand(time(NULL));
    sleep(rand()%10);
    printf("hello world\n");

    pthread_exit(NULL);
}

void *good_bye(){
    
    sleep(rand()%10);
    printf("goodbye\n");
    pthread_exit(NULL);
}

int main(void)
{

    srand(time(NULL));
    //create thread
    pthread_t thread1, thread2;

    if(pthread_create(&thread1, NULL, &hello_world, NULL)){
        printf("this thread could not be created \n");
        return -1;
    }


    if(pthread_create(&thread2, NULL, &good_bye,NULL)){
        printf("this thread could not be created \n");

        return -1;
    }


    pthread_join(thread1, 0); 
    pthread_join(thread2, 0);

}

