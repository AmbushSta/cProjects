/*Write a function swapIfGreater that exchanges the values of two int variables if the first one is greater than the second*/
/*
Example:
int first = 20;
int second = 10;
swapIfGreater(&first, &second);
// Values have been swapped
printf("%d %d\n", first, second);
Result:
10 20
*/

void swapIfGreater(int* x, int* y)
{
	//printf("%d %d\n", *a, *b);
	if(*x > *y){
		int temp = 0;
		temp = *y;
		*y = *x;
		*x = temp;
	}
}
