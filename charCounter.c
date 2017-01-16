/*Write a function with signature int countChars(const char* s, const char* charsOfInterest) 
that returns a count of the number of characters in the string s that also appear in the string charsOfInterest.*/

int countChars(const char* s, const char* charsOfInterest)
{
	int counter = 0;
	for(int i = 0; i < strlen(s);i++){
		for(int n = 0; n < strlen(charsOfInterest);n++){
			if(s[i] == charsOfInterest[n]){
				counter += 1;
			}
		}
	}
	return counter;
	
}
