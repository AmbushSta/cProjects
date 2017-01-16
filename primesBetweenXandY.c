/*Write a C program that uses scanf to read two integers n1 and n2, where n1 > 1 and n2 >= n1. 
The program should then print all the prime numbers between n1 and n2 inclusive.*/

#include <stdio.h>
#include <string.h>




#include <stdio.h> 

int main(void)


{
	int n1 =  0;
	int n2 = 0;
	scanf("%d %d", &n1,&n2);
	for(int i = n1; i <= n2; i++){
		for(int x = 2; x <= i; x++){
			if(i == x){
				printf("%d\n",i);
			}
			else if(i % x == 0){
				break;
			}
		}
		
	}
	return 0;
}
