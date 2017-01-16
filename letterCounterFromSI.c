/*Write a C program that reads its standard input until EOF occurs and prints out a table of how many
times each of the 26 letters in the alphabet occurred. Ignore all non-alphabetic characters. 
The program should be case-insensitive, i.e., each letter count 
includes both the lowercase and the uppercase letters.*/


#include <stdio.h>
#include <ctype.h>

int main(void)

{
	int array[26] = {0};
	char c = getchar();
	while(c != EOF){
		if(isalpha(c)){
			c = toupper(c);
			array[c-65] = array[c-65] + 1;
		}
		c = getchar();
	}
	
	for(int x = 0; x <= 25; x++){
		printf("%c: %d\n", x + 65, array[x]);
	}
}
