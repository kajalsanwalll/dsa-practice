#include <iostream>
using namespace std;

void bubbleSort(int A[], int n){

    int i,j;
    int flag;
    for(i=0;i<n-1;i++){

        for(j=0;j<n-1-i;j++){

            flag = 0;
            if(A[j] > A[j+1]){
                swap(A[j],A[j+1]);
                flag =1;
            }
        }
        if(flag == 0) break;
    }
}


int main(){

    int A[] = {3,7,9,10,6,5,12,4,11,2}, n = 10;
    bubbleSort(A,10);

    return 0;
}