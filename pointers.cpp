#include <iostream>
#include <stdio.h>

using namespace std;

int a = 10;  //data variable

int main() {
    
 // pointer to a variable 'a'
 int *p; // declaration of a pointer p
 p = &a; // initialising a pointer (value of a)
 cout << *p << endl;
 cout << a << endl;

 p = new int[4];
 cout << sizeof(*p) << endl; 

 //pointer to an array
 int A[5] = {2,4,6,8,10};
 int *p1; //declaration
 p1 = A; // initialisation doesnt need & in array

 for(int i=0; i<5; i++)
 cout << p1[i] << endl;


 // create an array inside heap memory
 int *p2; //declaration
 p2 = (int *)malloc(5*sizeof(int)); // in c language
 p2 = new int[5]; // in c++ language dynamically allocating memory

 p2[0]=1; p2[1]=2; p2[2] = 3; p2[3]= 4; p2[4] = 6;

 for(int i=0; i<5; i++)
 cout << p1[i] << endl;

 // delete []p2; // release dynamically allocated memory after using in c++
 // free(p2); // release memory in c language
}