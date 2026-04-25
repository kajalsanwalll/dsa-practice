#include <iostream>
using namespace std;

int findMaxx(int A[],int n){

    int max = INT32_MIN;
    int i;

    for(i=0;i<n;i++){

        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}

void countSort(int A[], int n){

    int i,j,max,*C;
    max =findMaxx(A,n);
    C = new int[max+1];

    for(i=0;i<=max;i++){

        C[i]=0;
    }

    for(i=0;i<n;i++){
        C[A[i]]++;
    }
    i=0;j=0;
    while (j<max+1)
    {
       if(C[j]>0){
        A[i++] =j;
        C[j]--;
       }
       else{
        j++;
       }
    }

}

int main(){

    int A[] = {11,13,7,12,16,9,24,5,10,3}, n = 10,i;
    countSort(A,n);

    //display 
    for(i=0;i<n;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}