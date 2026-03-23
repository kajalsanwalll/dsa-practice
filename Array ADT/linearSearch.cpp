#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct Array{

    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y){

    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}

int linearSearch(struct Array arr /*call by value because just search*/, int key){

    int i;
    for(i=0; i< arr.length; i++){

        if(key == arr.A[i]){
            swap(arr.A[i], arr.A[i-1]);
            return i-1;
        }
    }
    return -1; // element not found
}

int main(){


    struct Array arr = {{2,3,4,5,6,7},10,6};

    printf("%d\n", linearSearch( arr, 7));


    return 0;
}