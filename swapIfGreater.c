/*Write a function swapIfGreater that exchanges the values of two int variables if the first one is greater than the second*/

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
