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

//nested recursion = function calling a function with a function as a parameter
int funN(int n){
    if(n>100){

        printf("%d\n", n-10);
        return n-10;

    }else{
        return funN(funN(n+11));
    }
}

//sum of n natural numbers using recursion.
int Sum(int n){

    if(n==0){
        return 0;
    }else{
        return Sum(n-1)+n;
    }
}

int main(){

    fun(3);

    funA(20);

    int r;

    r = funN(95);
    cout << "value of final ans of nested: " << r << endl;

    int s;
    s = Sum(15);
    cout << "sum of 15 natural nos is: " << s << endl;

    return 0;
}