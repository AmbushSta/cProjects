/*Write a function mystrpbrk that behaves like 
strpbrk without using any of the functions in <string.h>*/

char *mystrpbrk(char *s, char *accept)
{
	int index = 0;
	char* answer = NULL;
	
	while(s[index] != '\0'){
		int aindex = 0;
		while(accept[aindex] != '\0'){
			if(s[index] == accept[aindex]){
				answer = &s[index];
				return answer;
			}
			aindex += 1;
			
		}
		
		index +=1;
		
	}
	
	return answer;
	
}
