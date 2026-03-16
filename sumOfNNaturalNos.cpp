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

int main(){
    int s;
    s = Sum(15);
    cout << "sum of 15 natural nos is: " << s << endl;
                        
}

        