#include <iostream>
using namespace std;

struct Array{

    int A[10];
    int size;
    int length;
    int H[20];
};

// pair with sum =k METHOD1 using two pointers
// k = target sum
int pairsum(struct Array arr, int n, int k){

    int i,j;

    for(i=0;i<n-1;i++){

        for(j=i+1; j<n; j++){
            if(arr.A[i]+ arr.A[j] == k){
                cout << arr.A[i] << "+" << arr.A[j] <<  "=" << k << endl;
            }
        }
    }

    return 0;
}

// UNSORTED ARRAY pairsum using hash table
int hashPairSum(struct Array arr, int n, int k){

    int i;
    for(i=0;i<n;i++){

        if(k - arr.A[i] >= 0 && arr.H[k - arr.A[i]] != 0){
            cout << arr.A[i] << "+" << k-arr.A[i] << "=" << k << endl;
        }
        arr.H[arr.A[i]]++;
    }

    return 0;
}

int main(){

    struct Array arr={{6,3,8,10,16,7,5,2,9,14},10,10};
    //pairsum(arr, 10, 10);
    hashPairSum(arr,10,10);

    return 0;

}