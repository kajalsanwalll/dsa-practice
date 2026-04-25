#include <iostream>
using namespace std;

//merge basic function
void Merge(int A[], int l, int mid, int h){

    int i=l,j=mid+1,k=l;
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
void IMergeSort(int A[], int n){

    int p,l,h,mid,i;

    for(p =2;p <= n;p=p*2){

        for(i=0;i+p-1<n;i=i+p){

            l=i;
            h = i+p-1;
            mid =(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2 < n){
        Merge(A,0,p/2-1,n-1);
    }

}

//recursive merge sort function
void RMergeSort(int A[], int l, int h){

    int mid;
    if(l<h){

        mid = (l+h)/2; 
        RMergeSort(A,l,mid);  //left side
        RMergeSort(A,mid+1,h);  //right side
        Merge(A,l,mid,h);

    }
}

int main(){

    int A[] = {11,13,7,12,16,9,24,5,10,3,INT32_MAX}, n = 11,i;
    IMergeSort(A,n);
    
    //display for iterative version
    for(i=0;i<10;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    RMergeSort(A,0,10);

    //display for recursive version
    for(i=0;i<10;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}