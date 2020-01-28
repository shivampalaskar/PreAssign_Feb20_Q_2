/*
 ============================================================================
 Name        : PreAssign_Feb20_Q_2.c
 Author      : Shivam Palaskar
 Version     :
 Copyright   : Open source
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* stiStrcpy(char*,char*);
int stiStrcmp(char*,char*);
char*  stiStrcat(char*,char*);
char* stiStrrev(char*);
int stiStrlen(char*);


int main(void) {
	char string1[] = {"Welcome To Sunbeam"}; // to Sunbeam CDAC Diploma Courses
	char string2[100];
	int i=0;

//strcpy
	stiStrcpy(string2,string1);
	printf("\nCopied string : %s\n",string2);

//strcmp
	// For Same String :
	stiStrcpy(string1,"ABC");
	stiStrcpy(string2,"ABC");
	printf("\nFor ABC and ABC : %d",stiStrcmp(string1,string2));
	// For string1 < string2
	stiStrcpy(string1,"ABC");
	stiStrcpy(string2,"DEF");
	printf("\nFor ABC and DEF : %d",stiStrcmp(string1,string2));

	// For string1 > string2
	stiStrcpy(string1, "DEF");
	stiStrcpy(string2, "BCD");
	printf("\nFor DEF and ABC : %d\n", stiStrcmp(string1, string2));

//strcat
	stiStrcpy(string1,"Welcome to ");
	stiStrcpy(string2,"Sunbeam");
	printf("\nString 1 : %s",string1);
	printf("\nString 2 : %s",string2);
	printf("\n After Concat : ");
	printf("\nString2 : %s\n",stiStrcat(string1,string2));

//strrev
	stiStrcpy(string1,"ABCDE");
	printf("\nString : %s",string1);
	printf("\nAfter reverse : %s",strrev(string1));

	return EXIT_SUCCESS;
}

int stiStrcmp(char *string1,char *string2) {
	int i=0;
	while (string1[i] != NULL) {
		int j = string1[i] - string2[i];
		if (j != 0)
			return j;
		i++;
	}
	return 0;
}

char* stiStrcpy(char *string2, char *string1) {
	int i=0;
	while(string1[i]!='\0') {  // We can also use NULL instead of '\0'
		string2[i]=string1[i];
		i++;
	}
	string2[i]='\0';
	//Note: NULL must have to append at the end of the string
	return string2;
}

char*  stiStrcat(char *string2,char *string1){
	int i,j;
	i=j=0;
	while (string2[i] != '\0')
		i++;
	while(string1[j]!='\0'){
		string2[i] = string1[j];
		i++;
		j++;
	}
	return string2;
}

char* stiStrrev(char *string){
	int len = stiStrlen(string),i=0; // strlen() gives length of string excluding \0
	char tempString[len];
	stiStrcpy(tempString,string);
	while(len){
		string[i]=tempString[len-1];
		len--;
		i++;
	}
	string[i]='\0';
	return string;
}

int stiStrlen(char *string){
	int i=0;
	while(string[i]!=NULL)
		i++;
	return i;
}
