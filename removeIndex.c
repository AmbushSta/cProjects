#include <stdio.h>
#include <stdlib.h>

void removeIndex(int* list, int index, int len){
    for (size_t i = index; i < len - 1; ++i)
        list[i] = list[i+1];
    realloc(list, len-1);
}

int main()
{
    int len = 5;
    int* x = malloc(sizeof(int) * len);
    
    for(int i = 0; i < len; i++){
        x[i] = i;
    }
    
    removeIndex(x, 3, len);
    
    for(int i = 0; i < len - 1; i ++){
        printf("%d\n", x[i]);
    }
}
