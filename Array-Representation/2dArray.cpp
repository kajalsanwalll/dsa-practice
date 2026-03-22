#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    //2d array inside stack 
    int A[3][4] = {{1,2,3,4},{3,4,5,5},{4,5,6,6}};  //3 rows 4 columns


    //2d (array pointer inside stack and arrays in heap)
    int *B[3]; // number of rows = 3
    B[0]= new int[4];
    B[1]= new int[4];  //number of columns = 4
    B[2]= new int[4];


    //2d array (completely inside heap)
    int **C; // double pointer in stack just to point to heap

    C = new int *[3]; // number of rows 3 but in heap

    C[0] = new int[4]; 
    C[1] = new int[4];  // number of columns = 4 in heap
    C[2] = new int[4];
    

    return 0;
}