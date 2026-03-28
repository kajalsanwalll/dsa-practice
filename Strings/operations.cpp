#include <iostream>
using namespace std;

char S[] = "WELCOME";
char S1[] = "wElCome";
char A[] = "How are you";
char name[] = "Namai321";

//function to validate a string(string valid or not)
int valid(char *name){

    int i;

    for(i=0;name[i]!='\0';i++){

        if(!(name[i]>=65 && name[i]<=90) 
         && !(name[i]>=97 && name[i]<=122) 
         && !(name[i]>=48 && name[i]<=57)){

            return 0; // invalid
        }

    }

    return 1; // valid string
}

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

    //counting vowels and consonants
    int vcount=0,ccount=0;

    for(i=0; A[i]!= '\0';i++){

        if(A[i] == 'a' || A[i] == 'e'|| A[i] == 'i' || A[i] == 'o' || A[i] == 'u' 
            || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'){
            vcount++;
        }
        else if((A[i]>=65 && A[i]<=90)|| (A[i]>=97 && A[i]<=122)){
            ccount++;
        }
    }
    cout << "no. of vowels: " << vcount << endl;
    cout << "no. of consonants: " << ccount << endl;

    //counting word in a sentence
    int word=1;
    for(i=0;A[i]!='\0';i++){

        if(A[i]==' ' && A[i-1]!= ' '){
            word++;
        }
    }
    cout << "number of words: " << word << endl;

    if(valid(name)){
        cout << "valid name" << endl;
    }
    else{
        cout << "invalid name" << endl;
    }
    return 0;
}