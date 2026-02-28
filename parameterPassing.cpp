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

// pass by reference to swap
    void swap1(int &x1, int &y1){
        int temp;
        temp = x1;
        x1=y1;
        y1= temp;
        
    }


int main(){

    //pass by reference to swap (c++ allows it by reference)
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);
    cout << a << "," << b << endl;

    int a1,b1;
    a1=8;
    b1=9;
    swap1(a1,b1);
    cout << a1 << "," << b1 << endl;

    
}