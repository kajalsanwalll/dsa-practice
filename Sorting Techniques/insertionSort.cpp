#include <iostream>
using namespace std;

void insertionSort(int A[], int n){

    int i,j,x;

    for(i=1;i<n;i++){

        j = i-1;
        x = A[i];

        while (j > -1 && A[j]>x)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
        
    }

}


int main(){

    int i;
    int A[] = {3,7,9,10,6,5,12,4,11,2}, n = 10;
    
    for(i=1;i<n;i++){
        insertionSort(A,10);
    }

    for(i=0;i<10;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}