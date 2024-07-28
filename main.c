#define MAXSTRPROMPT	255

#include <stdio.h>
#include <stdlib.h>

char* promptIn;

int main(void){
	promptIn = malloc(sizeof(char) * MAXSTRPROMPT);
	while(1){
		printf(">");
		getnstr(promptIn, MAXSTRPROMPT);
	}
	return 0;
}
