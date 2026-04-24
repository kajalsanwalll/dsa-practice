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

int Delete(int H[], int n){

    int i,j,x;
    int temp,val;
    val = H[1];

    x = H[n]; // we can delete first element only
    H[1] = H[n];
    H[n] = val;
    i=1;j=i*2;

    while(j<n-1){

        if(H[j+1] > H[j]){
            j = j+1;
        }

        if(H[i]<H[j]){
            temp = H[i];
            H[i] = H[j];
            H[j] = temp;
            i=j;
            j=2*j;
        }
        else{
            break;
        }
    }
    return val; //deleted value
}


int main(){

    int H[] = {0,10,20,30,25,5,40,35};
    //result in a max heap should be 40,25,35,10,5,20,30
    int i;

    for(i=2;i<=7;i++){
        Insert(H,i);
    }

   // cout << "deleted value is: " << Delete(H,7) << endl;
   // cout << "deleted value is: " << Delete(H,6) << endl;

    //for heap sort, delete all elements from heap
    for(i=7;i>1;i--){
        Delete(H,i);
    }

    for(i=1;i<=7;i++){
        cout << H[i] << " ";
    }
    cout << endl;

    return 0;
}