#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main() {

    int *arr,a_size,pos,key;

    printf("Enter array size:-> ");
    scanf("%d",&a_size);

    arr = malloc(sizeof(int)*a_size);

    printf("Enter array element:-> ");
    accept(a_size,arr);
    display(a_size,arr);

    printf("\nEnter No to find in array:-> ");
    scanf("%d",&key);

    pos = search(a_size,arr,key);
    if(key > 0)
    {
        printf("No found at %d position",pos);
    }else
    {
        printf("No not found");
    }

    return 0;
}
