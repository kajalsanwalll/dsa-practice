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
    for(i=0; i<arr.length; i++){
        printf("%d ", arr.A[i]);
    }

}

int BinarySearch(struct Array arr, int key){

    int l,i,h,mid;
    l=0;
    h=arr.length-1;

    while(l<=h){

        mid = (l+h)/2;

        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }

        
    }

    return -1;
}

int main(){

    struct Array arr = {{1,2,3,4,5,6,7,8,10},10,9};

    printf("%d\n", BinarySearch(arr,7));
    Display(arr);

    return 0;
}