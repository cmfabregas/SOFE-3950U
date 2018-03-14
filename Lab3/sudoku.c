#define _XOPEN_SOURCE 700 // required for barriers to work
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define NCHAR 1024  /* must be at least 1 */
void *row_col_check_(void *vptr_value);
void *row_col_check_2(void *vptr_value);
void *row_col_check_3(void *vptr_value);
void *row_col_check_4(void *vptr_value);
void *row_col_check_5(void *vptr_value);
void *row_col_check_6(void *vptr_value);
void *row_col_check_7(void *vptr_value);
void *row_col_check_8(void *vptr_value);
void *row_col_check_9(void *vptr_value);
void *grid_check(void *vptr_value);

int test,row_check,column_check,valid=0;

void *grid_check(void *vptr_value) { 

   char *arr = (char *)vptr_value;
   
   char arr2[9];
    //Grid 1
    arr2[0] = arr[0];
    arr2[1] = arr[2];
    arr2[2] = arr[4];
    arr2[3] = arr[18];
    arr2[4] = arr[20];
    arr2[5] = arr[22];
    arr2[6] = arr[36];
    arr2[7] = arr[38];
    arr2[8] = arr[40];

    int count = 9;
        for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                         valid++;
                       
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 2
    arr2[0] = arr[6];
    arr2[1] = arr[8];
    arr2[2] = arr[10];
    arr2[3] = arr[24];
    arr2[4] = arr[26];
    arr2[5] = arr[28];
    arr2[6] = arr[42];
    arr2[7] = arr[44];
    arr2[8] = arr[46];
   for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 3
    arr2[0] = arr[12];
    arr2[1] = arr[14];
    arr2[2] = arr[16];
    arr2[3] = arr[30];
    arr2[4] = arr[32];
    arr2[5] = arr[34];
    arr2[6] = arr[48];
    arr2[7] = arr[50];
    arr2[8] = arr[52];
    for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 4
    arr2[0] = arr[54];
    arr2[1] = arr[56];
    arr2[2] = arr[58];
    arr2[3] = arr[72];
    arr2[4] = arr[74];
    arr2[5] = arr[76];
    arr2[6] = arr[90];
    arr2[7] = arr[92];
    arr2[8] = arr[94];
   for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 5
    arr2[0] = arr[60];
    arr2[1] = arr[62];
    arr2[2] = arr[64];
    arr2[3] = arr[78];
    arr2[4] = arr[80];
    arr2[5] = arr[82];
    arr2[6] = arr[96];
    arr2[7] = arr[98];
    arr2[8] = arr[100];
    for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 6
    arr2[0] = arr[66];
    arr2[1] = arr[68];
    arr2[2] = arr[70];
    arr2[3] = arr[84];
    arr2[4] = arr[86];
    arr2[5] = arr[88];
    arr2[6] = arr[102];
    arr2[7] = arr[104];
    arr2[8] = arr[106];
    for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 7
    arr2[0] = arr[108];
    arr2[1] = arr[110];
    arr2[2] = arr[112];
    arr2[3] = arr[126];
    arr2[4] = arr[128];
    arr2[5] = arr[130];
    arr2[6] = arr[144];
    arr2[7] = arr[146];
    arr2[8] = arr[148];
    for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 8
    arr2[0] = arr[114];
    arr2[1] = arr[116];
    arr2[2] = arr[118];
    arr2[3] = arr[132];
    arr2[4] = arr[134];
    arr2[5] = arr[136];
    arr2[6] = arr[150];
    arr2[7] = arr[152];
    arr2[8] = arr[154];
    for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }
     //Grid 9
    arr2[0] = arr[120];
    arr2[1] = arr[122];
    arr2[2] = arr[124];
    arr2[3] = arr[138];
    arr2[4] = arr[140];
    arr2[5] = arr[142];
    arr2[6] = arr[156];
    arr2[7] = arr[158];
    arr2[8] = arr[160];
    for (int i = 0; i < count - 1; i++) { 
                for (int j = i + 1; j < count; j++) {
                    if (arr2[i] == arr2[j]) {
                        if(arr2[i] =='0'){

                        }
                        else {
                        //
                         valid++;
                        }
                    }
                    else {
                        
                    }
                }
            
        }

}

void *row_col_check_(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 18;
        for (int i = 0; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 144;
     for (int i = 0; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_2(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 36;
        for (int i = 18; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 146;
     for (int i = 2; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_3(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 54;
        for (int i = 36; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 148;
     for (int i = 4; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_4(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 72;
        for (int i = 54; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 150;
     for (int i = 6; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_5(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 90;
        for (int i = 72; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 152;
     for (int i = 8; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_6(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 108;
        for (int i = 90; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 154;
     for (int i = 10; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_7(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 126;
        for (int i = 108; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 156;
     for (int i = 12; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_8(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 144;
        for (int i = 126; i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 158;
     for (int i = 14; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

void *row_col_check_9(void *vptr_value) { 

   char *arr = (char *)vptr_value;

    int count = 161;
        for (int i = 144 ;i < count - 1; i++) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 1; j < count; j++) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
    /*
    Check Column
    */
    count = 160;
     for (int i = 16; i < count - 1; i+=18) { // read comment by @nbro
            if(i%2==0) {//check only even indexes, skip white space
                for (int j = i + 18; j < count; j+=18) {
                    if (arr[i] == arr[j]) {
                        if(arr[i] =='0'){


                        }

                        else {
                        //
                         valid++;
                        }
                        
                        // do whatever you do in case of a duplicate
                    }
                    else {
                        
                    }
                }
            }
        }
}

int main () {

    int c;
    size_t n = 0, nchar = NCHAR;
    char *arr = malloc (sizeof *arr * nchar);
    FILE *fp = fopen ("puzzle.txt", "r");

    if (!fp) {  /* validate file open for reading */
        fprintf (stderr, "error: file open failed '%s'.\n");
        return 1;
    }

    if (!arr) { /* validate memory allocation succeeded */
        fprintf (stderr, "error: virtual memory exhausted.\n");
        return 1;
    }

    while ((c = fgetc (fp)) != EOF) {  /* for each char in file */
        arr[n++] = c;       /* assign char to array */

        if (n == nchar) {   /* realloc preserving space for nul */
            void *tmp = realloc (arr, nchar + NCHAR);
            if (!tmp) {           /* validate realloc succeeded */
                fprintf (stderr, "realloc() error: memory exhausted.\n");
                break; /* break read loop, using existing 'arr' */
            }
            arr = tmp;     /* assign reallocated pointer to arr */
            nchar += NCHAR;        /* update the value of nchar */
        }
    }
    arr[n] = 0;                  /* affirmatively nul-terminate */

    if (fp != stdin) fclose (fp);    /* close file if not stdin */

    for (size_t i = 0; i < n; i++)   /* output arr */
    putchar(arr[i]);

    printf("\n");

    //////////////////////////////////////////////
    //  Start checking row,column and grid      //
    //////////////////////////////////////////////
    
    pthread_t thread1,thread2,thread3,thread4,thread5,thread6,thread7,thread8,thread9,thread10;  

	printf("\nCheck for solution... \n\n");
    pthread_create(&thread1,NULL,row_col_check_,arr);
    pthread_create(&thread2,NULL,row_col_check_2,arr);
    pthread_create(&thread3,NULL,row_col_check_3,arr);
    pthread_create(&thread4,NULL,row_col_check_4,arr);
    pthread_create(&thread5,NULL,row_col_check_5,arr);
    pthread_create(&thread6,NULL,row_col_check_6,arr);
    pthread_create(&thread7,NULL,row_col_check_7,arr);
    pthread_create(&thread8,NULL,row_col_check_8,arr);
    pthread_create(&thread9,NULL,row_col_check_9,arr);
    pthread_create(&thread10,NULL,grid_check,arr);
    
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
    pthread_join(thread7,NULL);
    pthread_join(thread8,NULL);
    pthread_join(thread9,NULL);
    pthread_join(thread10,NULL);

    free (arr);   /* free allocated memory */

    if(valid==0)
        printf("\tSolution Correct!\n\n");
    else{
        printf("\tSolution incorrect!\n\n");
    }
      
    return 0;

}