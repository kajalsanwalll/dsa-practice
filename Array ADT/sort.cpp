#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Array{

    int A[10];
    int size;
    int length;
};


void Display(struct Array arr){

    int i;
    printf("\nelements of this array are: \n");

    for(i=0;i<arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

void InsertSort(struct Array *arr, int x){

    int i = arr->length-1;

    if(arr->length == arr->size) return; 

    while(arr->A[i] > x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = x;
    arr->length++;
}

int main(){

    struct Array arr={{2,4,5,6}, 10, 4};

    InsertSort(&arr,3);
    Display(arr);

    return 0;
}