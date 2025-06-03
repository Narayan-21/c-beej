#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int total = 0;
	for (int i =1; i<argc; i++) { // argv[0] = file name always 
		int value = atoi(argv[i]);
		total += value;
	};
	printf("%d\n", total);
	return 0;
};

// argsv[argc] == NULL (after the last string, there is a pointer to NULL) (Always True)