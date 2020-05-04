#include <stdio.h>
#include <ctype.h>
#include <string.h>

int higher_to_lower(){
	int c;
	while ((c = getchar()) != EOF){
		putchar(tolower(c));	
	}
	return 0;
}

int lower_to_higher(){
	int c;
	while ((c = getchar()) != EOF){
		putchar(toupper(c));	
	}
	return 0;
}

int main(int argc, const char* argv[]){

	if ((strcmp(argv[0], "./higher_to_lower.o") == 0)){
		higher_to_lower();
	}
	
	else if ((strcmp(argv[0], "./lower_to_higher.o") == 0)){
		lower_to_higher();
	}
}