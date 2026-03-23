#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Array structure in heap
struct Array1
{
    int *B;
    int size;
    int length;
};

//array structure in stack
struct Array{

    int A[10];
    int size;
    int length;
};

//for heap display
void Display(struct Array1 arr){

    int i;
    printf("\nelements of this array are: \n");

    for(i=0;i<arr.length; i++){
        printf("%d ", arr.B[i]);
    }
}

//for stack display
void Display(struct Array array){

    int i;
    printf("\nelements of stack array are: \n");

    for(i=0;i<array.length; i++){
        printf("%d ", array.A[i]);
    }
}

//append function for stack array
void Append(struct Array *array, int x) // *array because call by address and int x= value to be added
{

    if(array->length < array->size){
        array->A[array->length++] = x;
    }
}

int main(){


    // array in heap memory
    struct Array1 arr;
    int i,n;

    printf("Enter size of array: ");
    scanf("%d", &arr.size);

    arr.B= new int[arr.size];
    arr.length=0;

    printf("Enter number of total elements: ");
    scanf("%d", &n);

    printf("enter all elements: \n");

    //read all elements and store them in an array arr from start to n
    for(i=0; i<n; i++){
        scanf("%d", &arr.B[i]);
    }

    arr.length=n;

    Display(arr);

    // array in stack memory
    struct Array array={{2,3,4,5}, 10, 4};

    Append(&array, 10);
    Display(array);


    return 0;
}