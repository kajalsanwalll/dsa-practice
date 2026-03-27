#include <iostream>
using namespace std;

struct Array{

    int A[11];
    int size;
    int length;
    int H[40]={0};
};

//for SORTED ARRAY METHOD1
int duplicate(struct Array arr, int n){

    int i;
    int lastDuplicate=0;

    for(i=0;i<n;i++){

        if(arr.A[i] == arr.A[i+1] && arr.A[i] != lastDuplicate){
            cout << "duplicate number: " << arr.A[i] << endl;
            lastDuplicate=arr.A[i];
        }
    }
    return 0;
}

//count duplicates for SORTED array METHOD1
int countDuplicates(struct Array arr, int n){

    int i,j;

    for(i=0;i<n-1;i++){

        if(arr.A[i]==arr.A[i+1]){

            j=i+1;
            while(arr.A[j] == arr.A[i]) j++;
            cout << arr.A[i] << " is appearing " << j-i << " times" << endl;
            i=j-1;
        }
    }

    return 0;
}

//duplicates using Hash table for SORTED array METHOD2
int Hashduplicates(struct Array arr, int n){

    int i;
    for(i=0; i< n; i++){
        arr.H[arr.A[i]]++;
    }

    for(i=0;i< 40; i++){
        if(arr.H[i]>1){
            cout << i << " is duplicated " << arr.H[i] <<" times" << endl;
        }
    }

    return 0;
}

//for UNSORTED ARRAY find, count duplicates METHOD1
int UnsortedDuplicates(struct Array arr1, int n){

    int i,j;
    for(i=0;i<n;i++){

        int count =1;

        if(arr1.A[i] != -1){
 
            for(j=i+1;j<n;j++){

                if(arr1.A[i] == arr1.A[j]){
                    count++;
                    arr1.A[j] = -1;
                }
            }

            if(count > 1)
              cout << arr1.A[i] << " is appearing " << count << " times" << endl;
        }
    }

    return 0;
}


int main(){

    struct Array arr={{3,6,8,8,10,12,15,15,15,18},10,10};
    //duplicate(arr, 10);
    //countDuplicates(arr,10);
    Hashduplicates(arr, arr.length );

    struct Array arr1 = {{8,3,6,4,6,5,6,8,2,7},10,10};
    UnsortedDuplicates(arr1, 10);

    return 0;
}