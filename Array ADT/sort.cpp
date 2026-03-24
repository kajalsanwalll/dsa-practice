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

    while(i >= 0 && arr->A[i] > x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = x;
    arr->length++;
}

// check if an array is sorted or not
int isSorted(struct Array arr){

    int i;
    
    for(i=0;i<arr.length-1;i++){

        if(arr.A[i] > arr.A[i+1]){
            return 0;  //false 
        }
    }

    return 1;  //true
}

int main(){

    struct Array arr={{2,4,5,6}, 10, 4};

    printf("%d\n", isSorted(arr));
    InsertSort(&arr,1);
    Display(arr);

    return 0;
}