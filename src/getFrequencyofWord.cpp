/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

void compare(char *, char *, int *);

int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL){		//validation check.
		return 0;
	}
	int ind, count = 0;
	for (ind = 0; str[ind] != '\0'; ind++){
		
		/*if str current character is equal to word first character then checking if the word is present in str from current index.*/

		if (str[ind] == word[0]){					
			compare((str+ind), word,&count);		//if word present in str function updates the count value.
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){	//with recursion
	if (str == NULL || word == NULL){			//validation
		return 0;
	}
	static int count = 0;						//taking count as static variable.
	if (str[0] != '\0'){						//it repeats untill str reached to end.
		if (str[0] == word[0]){					//if first characters are same then go for comparision.
			compare(str, word, &count);
		}
		count_word_int_str_way_2_recursion(str + 1, word);		//again calling the function with moving the str to next character.
	}
	return count;				//finally returning the count.
}

void compare(char *str, char *word, int *count){		//compare method.
	int ind_1, ind_2;
	for (ind_1 = ind_2 = 0; str[ind_1] != '\0'&&word[ind_2] != '\0'; ind_1++, ind_2++){
		if (str[ind_1] != word[ind_2]){			//if both the characters are not same
			break;
		}
	}
	if (word[ind_2] == '\0'){				//it means full word is succefully compared with str,ie.word is present in str.
		(*count)++;
	}
}