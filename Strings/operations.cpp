#include <iostream>
using namespace std;

char S[] = "WELCOME";
char S1[] = "wElCome";

int main(){

    // for length of string
    int i;
    for(i=0; S[i] != '\0'; i++){}
    cout << "length of string is: " << i << endl; // length = i because \0 is not counted

    //for changing the case 
    cout << "original case: " << S << endl;
    for(i=0; S[i]!= '\0'; i++){
        S[i] = S[i] + 32; //changing to lowercase
    }
    cout << "changed case: " << S << endl;

    //toggle the case
    cout << "current case: " << S1 << endl;
    for(i=0; S1[i] != '\0';i++){

        if(S1[i] >= 65 && S1[i]<=90){
            S1[i]+=32;
        }
        else if(S1[i]>= 'a' && S1[i]<='z'){
            S1[i]-=32;
        }
    }
    cout << "toggled case: " << S1 << endl;

    return 0;
}