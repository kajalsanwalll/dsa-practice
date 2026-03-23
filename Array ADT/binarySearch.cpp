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

//iterative function for binary search
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

//recursive function for binary search
int RBinarySearch(int a[],int l, int h, int key){

    int mid;

    if(l<=h){

        mid = (l+h)/2;

        if(key == a[mid]){
            return mid;
        }
        else if(key < a[mid]){
            return RBinarySearch( a, l, mid-1, key);
        }
        else{
            return RBinarySearch(a, mid+1 , h, key);
        }

    }

    return -1;
}

int main(){

    struct Array arr = {{1,2,3,4,5,6,7,8,10},10,9};

    printf("%d\n", BinarySearch(arr,7));
    Display(arr);

    printf("\n%d\n", RBinarySearch(arr.A,0,arr.length,8));
    Display(arr);


    return 0;
}