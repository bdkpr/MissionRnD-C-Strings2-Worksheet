/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	*consonants = 0;				//initialisation
	*vowels = 0;
	if (str != NULL){				//if string not null.
		int index;
		for (index = 0; str[index] != '\0'; index++){
			switch (str[index]){									//first checking whether the current character is vowels or not
			case 'a': case 'e':case 'i':case 'o':case 'u':
			case 'A': case 'E':case 'I':case 'O':case 'U':
				(*vowels)++;
				break;
			default:
				/*if the character is not a vowel checking whether it is a alphabet or not if alphabet increasing the consonant value*/

				if ((str[index] >= 'A'&&str[index] <= 'Z') || (str[index] >= 'a'&&str[index] <= 'z')){		
					(*consonants)++;
				}
			}
		}
	}
}