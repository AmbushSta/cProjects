/*
    Self reminder code
*/

#include <stdio.h>

void changeStringVal(char* input){
    input++;
    *(input + 1) += 5;
    printf("%s", input); //28
}

int main()
{
    char string[] = "123";
    changeStringVal(string);
    return 0;
}
