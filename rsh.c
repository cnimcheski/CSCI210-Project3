#include <stdio.h>
#include <stdlib.h>
#include <spawn.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

#define N 12

extern char **environ;

char *allowed[N] = {"cp","touch","mkdir","ls","pwd","cat","grep","chmod","diff","cd","exit","help"};

int isAllowed(const char*cmd) {
	// TODO
	// return 1 if cmd is one of the allowed commands
	// return 0 otherwise
	printf("hello");
	return 0;
}

int main() {

    // TODO
    // Add variables as needed

    char line[256];

	// infinite loop till exit command is run...
    while (1) {

		fprintf(stderr,"rsh>");

		if (fgets(line,256,stdin)==NULL) continue;

		if (strcmp(line,"\n")==0) continue;

		line[strlen(line)-1]='\0';

		if (strcmp(line, "exit") == 0) { 
			break; 
		}

		if (strcmp(line, "help") == 0) {
			// print out all the commands...
			printf("The allowed commands are:\n");
			printf("1: cp\n");
			printf("2: touch\n");
			printf("3: mkdir\n");
			printf("4: ls\n");
			printf("5: pwd\n");
			printf("6: cat\n");
			printf("7: grep\n");
			printf("8: chmod\n");
			printf("9: diff\n");
			printf("10: cd\n");
			printf("11: exit\n");
			printf("12: help\n");
		}

		// TODO
		// Add code to spawn processes for the first 9 commands
		// And add code to execute cd, exit, help commands
		// Use the example provided in myspawn.c

    }

    return 0;
}
