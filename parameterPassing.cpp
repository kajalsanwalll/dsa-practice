#include <iostream>
#include <stdio.h>

using namespace std;

// pass by address to swap
    void swap(int *x, int *y){
        int temp;
        temp = *x;
        *x=*y;
        *y= temp;
    }


int main(){

    //pass by reference to swap
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);
    cout << a << "," << b << endl;
    
}