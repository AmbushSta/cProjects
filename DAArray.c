/*Write a function with signature int* ramp(int n) that returns a pointer to a n-element dynamically-allocated array
of ints containing the values 1, 2, 3, ... n.  You may assume n is at least 1.*/
/*
Example:
int* data = ramp(5);
for (int i = 0; i < 5; i++) {
    printf("%d ", data[i]);
}
free(data);
Result:
1 2 3 4 5
*/


int* ramp(int n)
{
	int* number = malloc(n * sizeof(int));
	int index = 0;
	for(int i = 1; i <= n; i++){
		*(number + index) = i;
		index += 1;
	}
	
	
	return number;
}
