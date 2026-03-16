#include <iostream>
using namespace std;

//factorial using recursion
int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}

//factorial using loop
int fact(int n){
    int i,s = 1;

    for(i=1;i<=n; i++){
        s=s*i;
    }
    return s;
}

int main(){

    int f;
    f = factorial(5);
    cout << "factorial of 5: " << f << endl; 

    int su;
    su = fact(5);
    cout << "factorial using loop: " << su << endl;
}