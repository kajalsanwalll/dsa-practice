#include <stdio.h>
#include <iostream>

using namespace std;


//head recursion = function calls itself at the starting of the program
//tail recursion = function calls itself at the returning time/ end of program
// tree recursion - functions calls itself more than once
void fun(int n){
    
    if(n>0){

        cout << "value of n:" << n << endl;
        fun(n-1);
        fun(n-1);

    }
}

//indirect recursion = when funA calls funB and funB calls funC which then calls back funA.
void funB(int n);
void funA(int n){
    
    if(n>0){
        printf("%d\n",n);
        funB(n-1);
    }

}

void funB(int n){

    if(n>1){
        printf("%d\n", n);
        funA(n/2);
    }

}

int main(){

    fun(3);

    funA(20);

    return 0;
}