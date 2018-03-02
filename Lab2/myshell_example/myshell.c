/*
 * MyShell Project for SOFE 3950U / CSCI 3020U: Operating Systems
 * Jonas Albaira 100555164
 * Carlos Fabregas 100572307
  */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include "utility.h"
#include "myshell.h"

extern char **environ;

// Put macros or constants here using #define
#define BUFFER_LEN 256

// Put global environment variables here

// Define functions declared in myshell.h here

int main(int argc, char *argv[])
{
    // Input buffer and and commands
    char buffer[BUFFER_LEN] = { 0 };
    char command[BUFFER_LEN] = { 0 };
    char arg[BUFFER_LEN] = {"/home"};
    getcwd(arg, BUFFER_LEN);
    // Parse the commands provided using argc and argv
    printf("%s/myshell>",arg);
    
    // Perform an infinite loop getting command input from users
    while (fgets(buffer, BUFFER_LEN, stdin) != NULL)
    {   
        
        // Perform string tokenization to get the command and argument
            char *dir;
            memcpy(command, buffer, BUFFER_LEN);
            strtok_r(command, "\n", &dir); //removes \n in the command array
            strcpy(buffer,dir);
            strtok(buffer, "\n");

        // cd command -- change the current directory
        if (strcmp(command, "cd") == 0)
        {

            printf("%s", "Command not implemented. \nUse 'help' to view available commands. \n");
        }

        //clear command
        else if(strcmp(command, "clr") == 0)
        {       
            
            const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
            write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);

        }
        //dir command - display current directory
        else if(strcmp(command, "dir") == 0)
        {
                char cwd[1024];
                if (getcwd(cwd, sizeof(cwd)) != NULL)
                    fprintf(stdout, "Current working dir: %s\n", cwd);
                else
                    perror("getcwd() error");
                return 0;
        }
        //environ command - list all environmental strings
        else if(strcmp(command, "environ") == 0)
        {
                int i = 1;
                char *s = *environ;

                for (; s; i++) {

                    printf("%s\n", s);
                    s = *(environ+i);
                }
        }
        //echo command - displays comment
        else if(strcmp(command, "echo") == 0)
        {
            printf("%s", "Command not implemented. \nUse 'help' to view available commands. \n");
        }
        //help command - 
        else if(strcmp(command, "help") == 0)
        {
            int c;
            FILE *file;
            file = fopen("README.txt", "r");
            if (file) {
                while ((c = getc(file)) != EOF)
                    putchar(c);
            
            fclose(file);
            }
        }
        //
        else if(strcmp(command, "pause") == 0)
        {
            sleep(3);
        }
        // quit command -- exit the shell
        else if (strcmp(command, "quit") == 0)
        {
            return EXIT_SUCCESS;
        }

        // Unsupported command
        else
        {
            fputs("Unsupported command, use help to display the manual\n", stderr);
        }
    }
    return EXIT_SUCCESS;
}
