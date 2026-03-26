#include <iostream>
using namespace std;

struct Array{

    int A[11];
    int size;
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


int main(){

    struct Array arr={{1,2,3,4,5,6,8,9,10},11,9};
    printf("%d\n",missing(arr,0,10));

    struct Array arr1={{6,7,8,9,10,12,13,14,15,16,17},11,11};
    printf("%d",Missing(arr1,6,15,11));

    return 0;
}