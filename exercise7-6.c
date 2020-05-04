#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1000

void diff(char *leftLine, char* rightLine, int linenum){
  if (strcmp(leftLine,rightLine) != 0){
    printf("%d<%s\n%d>%s\n", linenum, leftLine, linenum, rightLine);
  }
}

int main(int argc, const char* argv[]){
	char leftLine[MAXLINE], rightLine[MAXLINE];
	int i = 0;

	FILE *leftFile = fopen(argv[1], "r");
	if( leftFile == NULL ){
		fprintf(stderr, "could not find the input file \n");
		exit(2);
	}
	
	FILE *rightFile = fopen(argv[2], "r");
	if( rightFile == NULL ){
		fprintf(stderr, "could not find the input file \n");
		exit(2);
	}

  while ( (fgets(leftLine, MAXLINE, leftFile) != NULL) 
	  && (fgets(rightLine, MAXLINE, rightFile) != NULL))
  {
    diff( leftLine, rightLine, i );
    i++;
  }

	fclose(leftFile);
	fclose(rightFile);

	return 0;
}