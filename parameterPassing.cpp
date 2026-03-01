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

    A[0] = 23;
     
    for(i=0; i<n; i++)
    cout << "array as a parameter: " << A[i] << endl;
}

//function returning an array
int * func(int n){
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return p;

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

    //array as parameter
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A,n);

    //function returning an array
    int *A1;
    int j;
    A1= func(5);

    for(j=0; j<5; j++)
    cout << "func returning an array: " << A1[j] << endl;

}