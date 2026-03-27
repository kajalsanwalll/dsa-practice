#include <iostream>
using namespace std;

struct Array{

    int A[11];
    int size;
    int length;
    int H[40]={0};
};


//find min max in one scan 
int minmax(struct Array arr, int n){

    int i;
    int min = arr.A[0];
    int max = arr.A[0];

    for(i=0;i<n;i++){

        if(arr.A[i] < min){
            min = arr.A[i];
        }
        else if(arr.A[i] > max){
            max = arr.A[i];
        }
    }

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;
}
// number of comparisons = 2(n-1)

int main(){

    struct Array arr={{5,8,3,9,6,2,10,7,-1,4}, 10, 10};
    minmax(arr,10);

    return 0;
}