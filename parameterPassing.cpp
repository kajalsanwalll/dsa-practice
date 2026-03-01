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

// array as a parameter

void fun(int A[], int n){
    int i;
     
    for(i=0; i<n; i++)
    cout << "array as a parameter: " << A[i] << endl;
}


int main(){

    //pass by address to swap
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);
    cout << "pass by address swap:" << a << "," << b << endl;

     //pass by reference to swap (c++ allows it by reference)
    int a1,b1;
    a1=8;
    b1=9;
    swap1(a1,b1);
    cout << "pass by reference swap:" << a1 << "," << b1 << endl;

    int A[5] = {2,4,6,8,10};
    fun(A,5);


}