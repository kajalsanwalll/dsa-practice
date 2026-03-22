#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){

    int i; 

    int A0[5]; //only declaration

    int A1[5] = {2,3,4,5,6}; //declaration and initialisation

    int A2[] = {2,4,6}; //declaration and initialisation without giving number of indices

    int A3[5] = {0}; // all zeros initialised

    //creating array in Heap
    int *p;
    int *c;
    p = new int[5]; //in c++
    c = (int *)malloc(5* sizeof(int));  // in c language
    p[0] = 1;
    p[1] = 12;
    p[2] = 13;
    p[3] = 16;
    p[4] = 11;

    for(i=0; i<5; i++){
        cout << "value of array in stack: " << A1[i] << endl;
    }

    for(i=0; i<5; i++){

        cout << "value of array in heap: " << p[i] << endl;
    }

    return 0;
}