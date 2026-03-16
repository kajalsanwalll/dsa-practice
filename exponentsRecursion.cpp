#include <iostream>
using namespace std;

//power using recursion
int pow(int m, int n){
   if(n==0){
    return 1;
   }else{
    return pow(m, n-1)*m;
   }
}

int main(){

    int p;
    p = pow(2,5);
    cout << "power of 2^5 is: " << p << endl;
}