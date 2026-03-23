#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Array
{
    int *A;
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

int main(){

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

    return 0;
}