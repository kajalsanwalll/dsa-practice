#include <iostream>

using namespace std;


//sum of n natural numbers using recursion.
int Sum(int n){

    if(n==0){
        return 0;
    }else{
        return Sum(n-1)+n;
    }
}

//sum using formula = n(n+1)/2
int sum(int n){
    return n*(n+1)/2;
}

int main(){
    int s;
    s = Sum(15);
    cout << "sum of 15 natural nos is: " << s << endl;

    int S;
    S = sum(15);
    cout << "sum using formula: " << S << endl;
                        
}

        