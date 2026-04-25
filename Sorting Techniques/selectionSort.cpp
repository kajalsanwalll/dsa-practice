#include <iostream>
using namespace std;

void selectionSort(int A[], int n){

    int i,j,k;

    for(i=0;i<n-1;i++){

        for(j=k=i; j<n;j++){

            if(A[j] < A[k]){
                k=j;
            }

        }
        swap(A[i],A[k]);
    }
}

int main(){

    int i;
    int A[] = {3,7,9,10,6,5,12,4,11,2}, n = 10;
    selectionSort(A,n);

    for(i=0;i<10;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}