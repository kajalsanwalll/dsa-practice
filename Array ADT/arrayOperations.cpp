#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Array structure in heap
struct Array1
{
    int *B;
    int size;
    int length;
};

//array structure in stack
struct Array{

    int A[10];
    int size;
    int length;
};

//for heap display
void Display(struct Array1 arr){

    int i;
    printf("\nelements of this array are: \n");

    for(i=0;i<arr.length; i++){
        printf("%d ", arr.B[i]);
    }
}

//for stack display
void Display(struct Array array){

    int i;
    printf("\nelements of stack array are: \n");

    for(i=0;i<array.length; i++){
        printf("%d ", array.A[i]);
    }
}

//append function for stack array
void Append(struct Array *array, int x) // *array because call by address and int x= value to be added
{

    if(array->length < array->size){
        array->A[array->length++] = x;
    }
}

void Insert(struct Array *array, int index, int x){

    int i;

    if( index >= 0 && index <= array->length){

        for(i=array->length; i>index; i--){

            array->A[i] = array->A[i-1];

        }
        array->A[index] = x;
        array->length++;
    }
}

int Delete(struct Array *array, int index ){

    int x=0; // for storing the deleted value
    int i;

    if(index>=0 && index<= array->length){
        
        x = array->A[index]; // value stored 

        for(i=index; i<array->length-1; i++){

            array->A[i] = array->A[i+1];

        }
        array->length--;
        return x;
    }

    return 0;
}

//get set methods
int get(struct Array array, int index){

    if(index>=0 && index< array.length){
        return array.A[index];
    }

    return 0;
}

int set(struct Array *array, int index, int x){

    if(index>=0 && index< array->length){
        array->A[index] = x;
    }

    return 0;
}


//reverse using swap
int reverse(struct Array *array){

    int i,j;
    for(i=0,j=array->length-1;i<j;i++,j--){

        swap(array->A[i], array->A[j]);
    }
    
    return 0;
}

//reverse using auxillary array
int reverse2(struct Array *array){
    
    int *B;
    int i,j;

    B = (int *)malloc(array->length*sizeof(int));

    for(i=array->length-1,j=0;i>=0;i--,j++){

        B[j] = array->A[i];
    }

    for(i=0;i< array->length;i++){

        array->A[i]= B[i];
    }

    return 0;

}


//max and min
int max(struct Array array, int max){

    max=0;
    int i;
    for(i=0; i< array.length; i++){

        if(array.A[i]> max){
            max = array.A[i];
        }
    }

    return max;
}

int min(struct Array array, int min){

    min=0;
    int i;
    for(i=0; i< array.length; i++){

        if(array.A[i] < min){
            min = array.A[i];
        }
    }

    return min;
}

//sum function
int sum(struct Array array, int total){

    total=0;
    int i;

    for(i=0;i<array.length; i++){

        total = total + array.A[i];
    }

    return total;

}

//average function

int avg(struct Array array, int total){

    total=0;
    int i;

    for(i=0;i<array.length; i++){

        total = total + array.A[i];
    }

    return total/array.length;
}

int main(){


    // array in heap memory
    struct Array1 arr;
    int i,n;

    printf("Enter size of array: ");
    scanf("%d", &arr.size);

    arr.B= new int[arr.size];
    arr.length=0;

    printf("Enter number of total elements: ");
    scanf("%d", &n);

    printf("enter all elements: \n");

    //read all elements and store them in an array arr from start to n
    for(i=0; i<n; i++){
        scanf("%d", &arr.B[i]);
    }

    arr.length=n;

    Display(arr);

    // array in stack memory
    struct Array array={{2,3,4,5}, 10, 4};

    Append(&array, 10);
    Insert(&array, 4,15);
    Display(array);
    Delete(&array,1);
    Display(array);

    printf("\n%d\n", get(array,3));
    set(&array,2,99);
    Display(array);

    printf("\n%d\n", min(array,0));
    printf("\n%d\n", max(array,0));
    printf("\n%d\n", sum(array,0));
    printf("\n%d\n", avg(array,0));
    reverse(&array);
    reverse2(&array);
    Display(array);

    return 0;
}