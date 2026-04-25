#include <iostream>
using namespace std;

//partition function for quick sort
int Partition(int A[], int l, int h){

    int pivot = A[l];
    int i=l,j=h;

    do{

        do{i++;}while(A[i]<= pivot);
        do{j--;}while(A[j]>pivot);

        if(i<j){
            swap(A[i],A[j]);
        }

    }while(i<j);
    swap(A[pivot],A[j]);

    return j;
}

//quick sort recursive function
void QuickSort(int A[], int n){

    
}

int main(){

    int i;
    int A[] = {11,13,7,12,16,9,24,5,10,3,INT_MAX}, n = 11;
    Partition(A,11,3);

    for(i=0;i<10;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}