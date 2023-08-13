#include "main.h"

void tokenizeInput(char *input, char **args) {
	args[0] = strtok(input, " ");

	int i = 1;
	while (args[i - 1] != NULL && i < 64) {
		args[i] = strtok(NULL, " ");
		i++;
	}
}

void executeCommand(char **args) {
	pid_t pid = fork();

	if (pid < 0) {
		perror("Fork failed");
	} else if (pid == 0) {
		if (execvp(args[0], args) < 0) {
			perror("Execution failed");
			exit(EXIT_FAILURE);
		}
	} else {
		wait(NULL);
	}
}

int main() {
	char input[1024];

	while (1) {
		printf("SimpleShell> ");
		fgets(input, sizeof(input), stdin);
		input[strlen(input) - 1] = '\0';

		char *args[64];
		tokenizeInput(input, args);

		if (args[0] != NULL) {
			if (strcmp(args[0], "exit") == 0) {
				break;
			}
			executeCommand(args);
		}
	}

	return 0;
}
