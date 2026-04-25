#include <iostream>
using namespace std;

//merge basic function
void Merge(int A[], int l, int h, int mid){

    int i,j,k;
    int B[100];

    while(i<= mid && j<=h){
        
        if(A[i]<A[j]){
            B[k++] = A[i++];
        }
        else{
            B[k++] = A[j++];
        }
    }
    for(;i<=mid;i++){
        B[k++] = A[i];
    }
    for(;j<=h;j++){
        B[k++] = A[j];
    }
    for(int i=l;i<=h;i++){
        A[i] = B[i];
    }

}

//merge sort iterative function
void IMergeSort(int A[], int l, int h){

    int j;
    

}

int main(){

    int A[] = {11,13,7,12,16,9,24,5,10,3,INT32_MAX}, n = 11,i;
    IMergeSort(A,0,n-1);

    for(i=0;i<10;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}