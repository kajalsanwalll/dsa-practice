#include <iostream>
using namespace std;

//insert in a heap
void Insert(int H[], int n){

    int i=n; int temp;
    temp = H[i];

    while (i>1 && temp > H[i/2])
    {
        H[i] = H[i/2];
        i = i/2;
    }
    H[i] = temp;

}


int main(){

    int H[] = {0,10,20,30,25,5,40,35};
    //result in a max heap should be 40,25,35,10,5,20,30
    int i;

    for(i=2;i<=7;i++){
        Insert(H,i);
    }

    for(i=1;i<=7;i++){
        cout << H[i] << " ";
    }
    cout << endl;

    return 0;
}