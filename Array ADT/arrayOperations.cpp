#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Array structure in heap
struct Array
{
    int *A;
    int size;
    int length;
};

//array structure in stack
struct Array1{

    int B[20];
    int size;
    int length;
};

//for heap display
void Display(struct Array arr){

    int i;
    printf("\nelements of this array are: \n");

    for(i=0;i<arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

//for stack display
void Display(struct Array1 array){

    int i;
    printf("\nelements of stack array are: \n");

    for(i=0;i<array.length; i++){
        printf("%d ", array.B[i]);
    }
}

int main(){


    // array in heap memory
    struct Array arr;
    int i,n;

    printf("Enter size of array: ");
    scanf("%d", &arr.size);

    arr.A= new int[arr.size];
    arr.length=0;

    printf("Enter number of total elements: ");
    scanf("%d", &n);

    printf("enter all elements: \n");

    //read all elements and store them in an array arr from start to n
    for(i=0; i<n; i++){
        scanf("%d", &arr.A[i]);
    }

    arr.length=n;

    Display(arr);

    // array in stack memory
    struct Array1 array={{2,3,4,5}, 20, 4};

    Display(array);

    return 0;
}