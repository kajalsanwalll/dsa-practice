#include <iostream>
using namespace std;

//tower of hanoi using recursion
void TOH(int n, int A, int B, int C){

    if(n>0){

        TOH(n-1, A,C,B);
        cout << "from " << A << " to " << C << endl;
        TOH(n-1,B,A,C);
    }
}

//a good question
int fun (int n)
    { 
     int x=1, k; 
     if (n==1) return x; 
      for (k=1; k<n; ++k) 
       x=x + fun (k) * fun (n-k); 
      return x; 
     cout << x << endl;
    }

int main(){

    TOH(3,1,2,3);
    cout << fun(5);
}