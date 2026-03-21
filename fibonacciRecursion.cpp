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

int main(){
    
    cout << "value of 7th term using recursion: " << fibo(7) << endl;
    cout << "value of 7th term using iteration: " << fib(7) << endl;
}