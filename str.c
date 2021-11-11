#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "def.h"


char *my_strcat(const char * const str1, const char * const str2){

	//find the length of the string
		int str1Length = strlen(str1);//string 1 length
		int str2Length = strlen(str2);//string 2 length

		//find the total size of both string
		int len = str1Length+str2Length;

		// pointer holding string to return 
		char *z = NULL;
		z = (char *) calloc(len+1, sizeof(char)); //allocate memory of new string

		int j=0;

		//initialize new strings
		for(int i=0; i<str1Length; i++){//for loop that goes through entire first string
			z[j++] = str1[i];//puts string in z
		}
		for(int i=0; i<str2Length; i++){//for loop that goes through entire second string
			z[j++] = str2[i]; //puts string in z in correct order
		}
		//add null character at end of string
		z[j] = '\0';

		return z; //return string


	}