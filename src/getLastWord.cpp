/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
//char *word_genarate(char *, int, int, char *);

char * get_last_word(char * str){
	if (str == NULL){			//validation
		return NULL;
	}
	char *last_Word;
	int index, start_ind, length, end_ind;
	end_ind=start_ind=length = 0;
	/*
		If current character space and the next character is not the space then we assign starting index as next of current index.
		ex: "hello  world  "
		here if my current index is at before 'w' then i assign starting index current index +1 value 
			with the help of else part i will find the length of word.
	*/
	for (index = 0; str[index] != '\0'; index++){
		if ((str[index] == ' ') && (str[index + 1] != ' ' )){
			if (str[index+1] != '\0'){
				start_ind = index + 1;
				length = 0;
			}
		}
		else if (str[index] != ' '){
			length++;
		}
	}
	/*last word in the string assigning to the variable*/
	end_ind = start_ind + length;
	last_Word = (char *)malloc(length*sizeof(char));		//resultant word dynamic allocation.
	
	for (index = 0; start_ind < end_ind; index++,start_ind++){
		last_Word[index] = str[start_ind];
	}
	last_Word[index]='\0';
	
	return last_Word;
}