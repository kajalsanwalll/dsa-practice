#include <stdio.h>
#include <iostream>

using namespace std;

void fun(int n){
    if (n>0){
        printf("%d\n",n);
        fun(n-1);
    }
}

void fun2(int n){
    if (n>0){

        fun2(n-1);
        printf("%d\n",n);

    }
}

int main(){
    int x=3;
    
    fun(x);
    fun2(x);

    return 0;
}
