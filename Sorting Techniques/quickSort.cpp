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
    swap(A[l],A[j]);

    return j;
}

//quick sort recursive function
void QuickSort(int A[], int l, int h){

    int j;
    if(l<h){
        j = Partition(A,l,h);  //j is in middle now 
        QuickSort(A,l,j);      // sorting left side wala :low se mid(j) tak
        QuickSort(A,j+1,h);   // sorting mid(j) se right side wala : high
    }

}

int main(){

    int A[] = {11,13,7,12,16,9,24,5,10,3,INT32_MAX}, n = 11,i;
    QuickSort(A,0,n-1);

    for(i=0;i<10;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}