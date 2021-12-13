//
// Created by drcool on 12/13/21.
//

#include <stdio.h>

void accept(int a_size, int arr[])
{

    for(int i = 0; i<a_size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display(int size,int arr[])
{
    printf("Array Elements");

    for(int i = 0; i < size; i++)
        printf("\t%d",arr[i]);
}

int search(int size, int arr[],int key)
{
    for (int i = 0; i < size; ++i) {
        if(arr[i] == key)
        {
            return i+1;
            break;
        }
    }
}