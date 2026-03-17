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

//power using even odd
int power(int m, int n){

    if(n==0){
        return 1;
    }

    if(n%2 == 0 ){

        return power(m*m, n/2);

    }else{
 
        return m * power(m*m, (n-1)/2);
    }

}

int main(){

    int p;
    p = pow(2,5);
    cout << "power of 2^5 is: " << p << endl;

    int q;
    q = power(2,5);
    cout << "power of 2^5 is: " << q << endl;


}