#include <stdio.h>
#include <iostream>

using namespace std;

// tree recursion - functions calls itself more than once
void fun(int n){
    
    if(n>0){

        cout << "value of n:" << n << endl;
        fun(n-1);
        fun(n-1);

    }
}

int main(){

    fun(3);


    return 0;
}