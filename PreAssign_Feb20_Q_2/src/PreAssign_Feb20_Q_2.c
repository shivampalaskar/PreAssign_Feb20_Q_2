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
#include <string.h>

int main(void) {
	char string1[] = {"Welcome to Sunbeam CDAC Diploma Course"};
	char string2[100];

//strcpy
	char *point1 = strcpy(string2,string1);
	printf("\nCopied string : %s",point1);

//strcmp
	printf("\nstrcmp : %d",strcmp(string1,string2)); // retunrs 0 when strings are same
	strcpy(string1,"ABC");
	strcpy(string2,"ABC");
	printf("\nABC=ABC : %d",strcmp(string1,string2));
	strcpy(string2,"ADB");
	printf("\nABC=ADB : %d",strcmp(string1,string2));
	strcpy(string1,"BC");
	strcpy(string2,"ABC");
	printf("\nBC=ABC : %d",strcmp(string1,string2));

//strcat
	printf("\nstrcat : %s",strcat(string2,string1));

//strrev
	printf("\nstrrev : %s",strrev(string2));

	return EXIT_SUCCESS;
}
