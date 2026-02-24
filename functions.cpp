#include <iostream>
#include <stdio.h>

using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int x,y,z;
    x=20;
    y=7;
    z=add(x,y);

    cout << "sum is:" << z << endl;
}