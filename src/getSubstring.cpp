/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){
	if (str == NULL || i > j){				//validity check
		return NULL;
	}
	int ind, length;
	char *sub_string;
	length = (j - i) + 1;					//length of the sub string
	sub_string = (char *)malloc(length*sizeof(char));		//sub string allocation
	
	/* First checking whether i th index element is presnt in the string or not.ie. if length of the string is less than i.	*/
	
	for (ind = 0; str[ind] != '\0'&&ind <= i; ind++)
		continue;
	if (ind > i){
		for (ind = 0; str[i] != '\0'&&i <= j; ind++, i++){
			sub_string[ind] = str[i];
		}
		/*if j th element is not there,ie.if string length is less than j.
		Then i'm returning the null
			since your are not mentioned any thing about it.
		*/
		if (i > j){
			sub_string[ind] = '\0';
		}
		else{
			sub_string = NULL;
		}
	}
	else{
		sub_string = NULL;
	}
	//sub_string[ind] = '\0';
	return sub_string;
}