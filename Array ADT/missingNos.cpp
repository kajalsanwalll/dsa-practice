#include <iostream>
using namespace std;

struct Array{

    int A[11];
    int size;
    int H[20]={0};
    int length;
};
// if natural numbers sorted array starting from 1
int missing(struct Array arr, int sum, int n){

    int i,s;
    sum=0;
    for(i=0;i<11;i++){
        sum = sum+arr.A[i];
    }

    s= n*(n+1)/2;
    return s-sum;

}

//finding missing number in a sorted array of n natural numbers NOT starting from 1
int Missing(struct Array arr1,int l, int h, int n){

    int i;
    int diff = l-0;

    for( i=0;i<n;i++){

        if(arr1.A[i]-i != diff){
            
            cout << "missing number is: " << i+diff << endl;
            break;
        }
        
    }

    return i+diff;
}

// find multiple missing elements 
int Multiplemiss(struct Array arr2, int l, int h, int n){

    int i;
    int diff=6;

    for(i=0; i<n;i++){

        if(arr2.A[i]-i != diff){

            while(diff<arr2.A[i]-i){
                cout << "missing numbers are: " << i+ diff << endl;
                diff++;
            }
        }
    }

    return 0;
}

//finding multiple missing numbers using hash table/ bitset
int hashMiss(struct Array arr2, int l, int h, int n){

    int i;

    for(i=0;i<n;i++){
        arr2.H[arr2.A[i]]++;
    }

    for(i=l;i<=h;i++){

        if(arr2.H[i]==0){
 
            cout << "missing num using hash: " << i << endl;
        
        }
    }

    return 0;
}


int main(){

    struct Array arr={{1,2,3,4,5,6,8,9,10},11,9};
    printf("%d\n",missing(arr,0,10));

    struct Array arr1={{6,7,8,9,10,12,13,14,15,16,17},11,11};
    printf("%d",Missing(arr1,6,15,11));

    struct Array arr2={{6,7,8,9,11,12,15,16,17,18,19},11,11};
    printf("%d",Multiplemiss(arr2,6,19,11));
    printf("%d",hashMiss(arr2,6,19,11));

    return 0;
}