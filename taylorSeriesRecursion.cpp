#include <iostream>
using namespace std;

double e(int x, int n){
 
    static double p=1, f=1;
    double r;

    if(n==0){
        return 1;
    }
    else{

        r = e(x, n-1);
        p = p*x;
        f = f*n;

        return r+ p/f;

    }
}

// taylor series with horner fashion with loop
double e1(int x, int n){

    double s = 1;

    for(;n>0 ; n--){
        s = 1+x*s/n;
    }

    return s;
}

// taylor series with recursion using horner 
double e2(int x, int n){
    static double s1=1;

    if(n==0)
        return s1;
        s1 = 1+x*s1/n;

    return e2(x, n-1);
    
}
int main(){

    printf("%lf\n", e(4,16));
    printf("%lf\n", e1(4,16));
    printf("%lf\n", e2(4,16));

}