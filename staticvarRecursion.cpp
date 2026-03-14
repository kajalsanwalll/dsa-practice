#include <stdio.h>
#include <iostream>

using namespace std;

int fun(int n){

    //static variable declaration and initialisation
    static int x=0;

    if (n>0){

        x++;
        cout << "n before is:" << n << endl;
        fun(n - 1) + x;
        cout << "n after is:" << n << endl;
    }
    
    return 0;
}

int main(){
    int y=3;
    
    fun(y);

    return 0;
}
