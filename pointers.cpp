#include <iostream>
#include <stdio.h>

using namespace std;

int a = 10;  //data variable

int main() {
    
 int *p; // declaration of a pointer p
 p = &a; // initialising a pointer (value of a)

 cout << *p << endl;

}