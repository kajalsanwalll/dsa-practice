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

    cout << "missing number is: " << s-sum << endl;
}


int main(){

    struct Array arr={{1,2,3,4,5,6,8,9,10},11,9};
    printf("%d",missing(arr,0,10));

    return 0;
}