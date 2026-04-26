#include <iostream>
using namespace std;


void shellSort(int A[], int n){

    int gap,i,j,temp;

    for(gap= n/2 ;gap>=1;gap/=2){

        for(i=gap;i<n;i++){
            temp = A[i];
            j = i-gap;
            while(j>=0 && A[j] > temp){
                A[j+gap] = A[j];
                j = j-gap;
            }
            A[j+gap] = temp;
        }
    }
}


int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66}, n = 8;
    

    shellSort(arr,n);
   

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}