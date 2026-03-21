#include <iostream>
using namespace std;

//using pascal's triangle recursion
int C(int n, int r){

    if((r==0) || (n==r)){
        return 1;
    }
    else{

        return C(n-1,r-1) + C(n-1, r);
    }
}

//using simple factorial function
int fact(int n){
     if(n==0) return 1;
     else{
        return fact(n-1)*n;
     }
}

int NCR(int n, int r){

    int num,den;

    num = fact(n);
    den = fact (r) * fact(n-r);

    return num/den;
}

int main(){

    cout << "value of 4c4 using factorial is: " << NCR(4,4) << endl;
    cout << "value of 4c4 using recursion is:" << C(4,4) << endl;
}