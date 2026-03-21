#include <iostream>
using namespace std;

//recursion
int fibo(int n){
  
    if(n<=1){
        return n;
    }
    return fibo(n-2)+ fibo(n-1);
}

//iteration
int fib(int n){

    int t0=0, t1=1, s , i;

    if(n<=1){
        return n;
    }

    for(i=2; i<=n; i++){
        s = t0+t1;
        t0=t1;
        t1=s;
    }

    return s;
}

//using MEMOIZATION = to reduce no of calls and order to O(n) by storing result in array
int F[10];
int mfib(int n){
    
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{

        if(F[n-2] == -1){
            F[n-2]= mfib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1]= mfib(n-1);
        }

        return F[n-2] + F[n-1];
    }
}

int main(){
    
    cout << "value of 7th term using recursion: " << fibo(7) << endl;
    cout << "value of 7th term using iteration: " << fib(7) << endl;
    cout << "value of 7th term using memoized function: " << fib(7) << endl;
}