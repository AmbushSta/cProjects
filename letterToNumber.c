/*Reading from standard input printing each letter as it's number, or any other standard
input value onto it's numerical digit*/
/*
Example:
Input:
Go ENCE260!
End
Result:
'G': Letter 7
'o': Letter 15
' ': Non-alphanumeric
'E': Letter 5
'N': Letter 14
'C': Letter 3
'E': Letter 5
'2': Digit 2
'6': Digit 6
'0': Digit 0
'!': Non-alphanumeric
'\n'
'E': Letter 5
'n': Letter 14
'd': Letter 4
'\n'
*/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	
	char c = 0;
	c = getchar();
    // Read characters until newline or EOF
    while(c != EOF) {
		if(c == '\n'){
			printf("'\\n'\n");
			c = getchar();
		}
		else {
			if(isdigit(c)){
				printf("'%c': Digit %c\n",c,c);
				c = getchar();
			}
			else if(isalpha(c)){
				if(isupper(c)){
					printf("'%c': Letter %d\n",c,c-64);
					c = getchar();
				}
				else{
					printf("'%c': Letter %d\n",c,c-96);
					c = getchar();
				}
			}
			else{
				printf("'%c': Non-alphanumeric\n",c);
				c = getchar();
			}
		}
		
    }
	
}
