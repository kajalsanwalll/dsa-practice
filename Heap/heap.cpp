#include <iostream>
using namespace std;

//insert in a heap
void Insert(int H[], int n){

    int i=n; int temp;
    temp = H[i];

    while (i>1 && temp > H[i/2])
    {
        H[i] = H[i/2];
        i = i/2;
    }
    H[i] = temp;

}


int main(){


    int H[] = {0,2,5,8,9,4,10,7};

    return 0;
}