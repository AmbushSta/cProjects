/*Displays an open "tent" shape of stars of size n 

Example:
printTent(5)
    *
   * *
  *   *
 *     *
*       *
*/

void printTent(int n)
{
    for(int row = 1; row <= n; row++){
	for(int space = 1; space <= n - row; space ++){
	    printf(" ");
	}
	printf("*");
	if(row != 1){
		for(int i = 1; i <= (row * 2) - 3; i++){
	    	    printf(" ");
		}
	printf("*\n");
	}else{
		printf("\n");
	}
    }
}
